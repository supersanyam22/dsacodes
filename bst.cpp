
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// 1. Insertion
Node* insert(Node* root, int value) {
    if (root == nullptr)
        return new Node(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);
    else
        cout << "Duplicate values are not allowed.\n";

    return root;
}

// 2. Searching
bool search(Node* root, int key) {
    if (root == nullptr)
        return false;

    if (root->data == key)
        return true;

    if (key < root->data)
        return search(root->left, key);

    return search(root->right, key);
}

// Find minimum node in a subtree
Node* findMin(Node* root) {
    while (root != nullptr && root->left != nullptr)
        root = root->left;

    return root;
}

// 3. Deletion
Node* deleteNode(Node* root, int key) {
    if (root == nullptr)
        return nullptr;

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    }
    else {
        // No left child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // No right child
        if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Two children
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

// Display BST in sorted order
void inorder(Node* root) {
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Free allocated memory
void freeTree(Node* root) {
    if (root == nullptr)
        return;

    freeTree(root->left);
    freeTree(root->right);
    delete root;
}

int main() {
    Node* root = nullptr;
    int choice, value;

    do {
        cout << "\n\n--- Binary Search Tree Menu ---\n";
        cout << "1. Insert\n";
        cout << "2. Search\n";
        cout << "3. Delete\n";
        cout << "4. Display (Inorder)\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                root = insert(root, value);
                break;

            case 2:
                cout << "Enter value to search: ";
                cin >> value;

                if (search(root, value))
                    cout << value << " found in BST.\n";
                else
                    cout << value << " not found in BST.\n";
                break;

            case 3:
                cout << "Enter value to delete: ";
                cin >> value;

                if (search(root, value)) {
                    root = deleteNode(root, value);
                    cout << value << " deleted successfully.\n";
                } else {
                    cout << value << " not found in BST.\n";
                }
                break;

            case 4:
                cout << "Inorder traversal: ";
                inorder(root);
                cout << endl;
                break;

            case 5:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    freeTree(root);
    return 0;
}
