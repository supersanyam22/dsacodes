
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void insert(int value) {
    Node* newNode = new Node{value, nullptr};

    if (head == nullptr) {
        head = newNode;
        newNode->next = head;
        return;
    }

    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;
}

void deleteNode(int value) {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    Node* curr = head;
    Node* prev = nullptr;

    do {
        if (curr->data == value) {
            if (curr == head && curr->next == head) {
                head = nullptr;
            } else {
                if (curr == head) {
                    Node* last = head;
                    while (last->next != head)
                        last = last->next;

                    head = head->next;
                    last->next = head;
                } else {
                    prev->next = curr->next;
                }
            }

            delete curr;
            cout << "Node deleted\n";
            return;
        }

        prev = curr;
        curr = curr->next;
    } while (curr != head);

    cout << "Element not found\n";
}

void display() {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n1. Insert\n2. Delete\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                insert(value);
                break;

            case 2:
                cout << "Enter value to delete: ";
                cin >> value;
                deleteNode(value);
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 4);

    return 0;
}
