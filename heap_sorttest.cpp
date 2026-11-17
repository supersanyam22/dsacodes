#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node *left, *right, *parent;
    Node(int d) : data(d), left(nullptr), right(nullptr), parent(nullptr) {}
};

class MaxHeap {
    Node *root;
    int count;

    // Find the node at position pos (1-based, level order) by following
    // the binary digits of pos from the root.
    Node *getNodeAt(int pos) const {
        int mask = 1;
        while (mask <= pos / 2) mask <<= 1;     // highest set bit of pos

        Node *cur = root;
        for (mask >>= 1; mask > 0; mask >>= 1)
            cur = (pos & mask) ? cur->right : cur->left;
        return cur;
    }

    void heapifyUp(Node *node) {
        while (node->parent && node->data > node->parent->data) {
            swap(node->data, node->parent->data);
            node = node->parent;
        }
    }

    void heapifyDown(Node *node) {
        while (node) {
            Node *largest = node;
            if (node->left  && node->left->data  > largest->data) largest = node->left;
            if (node->right && node->right->data > largest->data) largest = node->right;

            if (largest == node) break;
            swap(node->data, largest->data);
            node = largest;
        }
    }

    void destroy(Node *node) {
        if (!node) return;
        destroy(node->left);
        destroy(node->right);
        delete node;
    }

public:
    MaxHeap() : root(nullptr), count(0) {}
    ~MaxHeap() { destroy(root); }

    bool empty() const { return count == 0; }

    void insert(int value) {
        Node *node = new Node(value);
        count++;

        if (count == 1) {
            root = node;
            return;
        }

        Node *parent = getNodeAt(count / 2);
        if (count % 2 == 0) parent->left = node;
        else                parent->right = node;
        node->parent = parent;

        heapifyUp(node);
    }

    int extractMax() {
        int maxVal = root->data;
        Node *last = getNodeAt(count);

        if (count == 1) {
            delete root;
            root = nullptr;
        } else {
            root->data = last->data;            // move last value to root
            if (last->parent->left == last) last->parent->left = nullptr;
            else                            last->parent->right = nullptr;
            delete last;
            heapifyDown(root);
        }
        count--;
        return maxVal;
    }
};

void heapSort(vector<int> &arr) {
    MaxHeap heap;

    for (int x : arr)                           // build heap: O(n log n)
        heap.insert(x);

    for (int i = (int)arr.size() - 1; i >= 0; i--)
        arr[i] = heap.extractMax();             // fill from the end -> ascending
}

int main() {
    vector<int> arr = {12, 3, 45, 7, 19, 1, 88, 23, 5};

    cout << "Before: ";
    for (int x : arr) cout << x << " ";

    heapSort(arr);

    cout << "\nAfter:  ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    return 0;
}
