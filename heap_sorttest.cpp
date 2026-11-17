#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *left, *right, *parent;
} Node;

typedef struct {
    Node *root;
    int count;              // number of nodes in the heap
} Heap;

/* ---------- helpers ---------- */

Node *newNode(int data) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->data = data;
    n->left = n->right = n->parent = NULL;
    return n;
}

void swapData(Node *a, Node *b) {
    int t = a->data;
    a->data = b->data;
    b->data = t;
}

/* Find the node at position pos (1-based, level order) in a complete
   binary tree by following the binary digits of pos from the root. */
Node *getNodeAt(Node *root, int pos) {
    int mask = 1;
    while (mask <= pos / 2) mask <<= 1;     // highest set bit of pos

    Node *cur = root;
    for (mask >>= 1; mask > 0; mask >>= 1)
        cur = (pos & mask) ? cur->right : cur->left;
    return cur;
}

/* ---------- heap operations (max-heap) ---------- */

void heapifyUp(Node *node) {
    while (node->parent && node->data > node->parent->data) {
        swapData(node, node->parent);
        node = node->parent;
    }
}

void heapifyDown(Node *node) {
    while (node) {
        Node *largest = node;
        if (node->left  && node->left->data  > largest->data) largest = node->left;
        if (node->right && node->right->data > largest->data) largest = node->right;

        if (largest == node) break;
        swapData(node, largest);
        node = largest;
    }
}

void insert(Heap *h, int value) {
    Node *node = newNode(value);
    h->count++;

    if (h->count == 1) {
        h->root = node;
        return;
    }

    Node *parent = getNodeAt(h->root, h->count / 2);
    if (h->count % 2 == 0) parent->left = node;
    else                   parent->right = node;
    node->parent = parent;

    heapifyUp(node);
}

int extractMax(Heap *h) {
    int max = h->root->data;
    Node *last = getNodeAt(h->root, h->count);

    if (h->count == 1) {
        free(h->root);
        h->root = NULL;
    } else {
        h->root->data = last->data;         // move last value to root
        if (last->parent->left == last) last->parent->left = NULL;
        else                            last->parent->right = NULL;
        free(last);
        heapifyDown(h->root);
    }
    h->count--;
    return max;
}

/* ---------- heap sort ---------- */

void heapSort(int arr[], int n) {
    Heap h = { NULL, 0 };

    for (int i = 0; i
