
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = nullptr;

void push(int value) {
    Node* newNode = new Node{value, top};
    top = newNode;
    cout << value << " pushed into stack\n";
}

void pop() {
    if (top == nullptr) {
        cout << "Stack Underflow\n";
        return;
    }

    Node* temp = top;
    cout << temp->data << " popped from stack\n";
    top = top->next;
    delete temp;
}

void peek() {
    if (top == nullptr)
        cout << "Stack is empty\n";
    else
        cout << "Top element: " << top->data << endl;
}

void display() {
    if (top == nullptr) {
        cout << "Stack is empty\n";
        return;
    }

    Node* temp = top;
    cout << "Stack elements: ";

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n1. Push\n2. Pop\n3. Peek\n";
        cout << "4. Display\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 5);

    // Free remaining nodes
    while (top != nullptr) {
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    return 0;
}
