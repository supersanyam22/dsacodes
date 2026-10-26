
#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int key;
    int height;
    Node* left;
    Node* right;

    Node(int value) {
        key = value;
        height = 1;
        left = right = nullptr;
    }
};

// Get height of a node
int getHeight(Node* node) {
    if (node == nullptr)
        return 0;

    return node->height;
}

// Update height of a node
void updateHeight(Node* node) {
    if (node != nullptr) {
        node->height = 1 + max(
            getHeight(node->left),
            getHeight(node->right)
        );
    }
}

// Calculate balance factor
int getBalance(Node* node) {
    if (node == nullptr)
        return 0;

    return getHeight(node->left) -
           getHeight(node->right);
}

// Right rotation (LL case)
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    updateHeight(y);
    updateHeight(x);

    return x;
}

// Left rotation (RR case)
Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    updateHeight(x);
    updateHeight(y);

    return y;
}

// Balance a node using rotations
Node* balanceNode(Node* node) {
    if (node == nullptr)
        return nullptr;

    updateHeight(node);

    int balance = getBalance(node);

    // LL case
    if (balance > 1 &&
        getBalance(node->left) >= 0) {
        return rightRotate(node);
    }

    // LR case
    if (balance > 1 &&
        getBalance(node->left) < 0) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // RR case
    if (balance < -1 &&
        getBalance(node->right) <= 0) {
        return leftRotate(node);
    }

    // RL case
    if (balance < -1 &&
        getBalance(node->right) > 0) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

// Insert a key
Node* insert(Node* root, int key) {
    if (root == nullptr)
        return new Node(key);

    if (key < root->key)
        root->left = insert(root->left, key);
    else if (key > root->key)
        root->right = insert(root->right, key);
    else {
        cout << "Duplicate keys are not allowed.\n";
        return root;
    }

    return balanceNode(root);
}

// Search for a key
bool search(Node* root, int key) {
    if (root == nullptr)
        return false;

    if (key == root->key)
        return true;

    if (key < root->key)
        return search(root->left, key);

    return search(root->right, key);
}

// Find minimum node
Node* findMin(Node* root) {
    while (root != nullptr &&
           root->left != nullptr) {
        root = root->left;
    }

    return root;
}

// Delete a key
Node* deleteNode(Node* root, int key) {
    if (root == nullptr)
        return nullptr;

    if (key < root->key) {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->key) {
        root->right = deleteNode(root->right, key);
    }
    else {
        // Zero or one child
        if (root->left == nullptr ||
            root->right == nullptr) {

            Node* child = root->left != nullptr
                          ? root->left
                          : root->right;

            delete root;
            return child;
        }

        // Two children
        Node* successor = findMin(root->right);
        root->key = successor->key;

        root->right = deleteNode(
            root->right, successor->key
        );
    }

    return balanceNode(root);
}

// Inorder traversal
void inorder(Node* root) {
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->key << " ";
    inorder(root->right);
}

// Preorder traversal
void preorder(Node* root) {
    if (root == nullptr)
        return;

    cout << root->key << " ";
    preorder(root->left);
    preorder(root->right);
}

// Postorder traversal
void postorder(Node* root) {
    if (root == nullptr)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->key << " ";
}

// Display height and balance factor
void displayDetails(Node* root) {
    if (root == nullptr)
        return;

    cout << "Node: " << root->key
         << ", Height: " << root->height
         << ", Balance Factor: "
         << getBalance(root) << endl;

    displayDetails(root->left);
    displayDetails(root->right);
}

// Free memory
void freeTree(Node* root) {
    if (root == nullptr)
        return;

    freeTree(root->left);
    freeTree(root->right);
    delete root;
}

int main() {
    Node* root = nullptr;
    int choice, key;

    do {
        cout << "\n\n===== AVL TREE MENU =====\n";
        cout << "1. Insert\n";
        cout << "2. Search\n";
        cout << "3. Delete\n";
        cout << "4. Inorder Traversal\n";
        cout << "5. Preorder Traversal\n";
        cout << "6. Postorder Traversal\n";
        cout << "7. Display Height and Balance Factors\n";
        cout << "8. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter key to insert: ";
                cin >> key;
                root = insert(root, key);
                cout << "Insertion completed.\n";
                break;

            case 2:
                cout << "Enter key to search: ";
                cin >> key;

                if (search(root, key))
                    cout << key << " found.\n";
                else
                    cout << key << " not found.\n";
                break;

            case 3:
                cout << "Enter key to delete: ";
                cin >> key;

                if (search(root, key)) {
                    root = deleteNode(root, key);
                    cout << "Deletion completed.\n";
                } else {
                    cout << key << " not found.\n";
                }
                break;

            case 4:
                cout << "Inorder: ";
                inorder(root);
                cout << endl;
                break;

            case 5:
                cout << "Preorder: ";
                preorder(root);
                cout << endl;
                break;

            case 6:
                cout << "Postorder: ";
                postorder(root);
                cout << endl;
                break;

            case 7:
                if (root == nullptr)
                    cout << "Tree is empty.\n";
                else
                    displayDetails(root);
                break;

            case 8:
                cout << "Exiting AVL Tree program.\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 8);

    freeTree(root);
    return 0;
}
