
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = nullptr;
Node* rear = nullptr;

void enqueue(int value) {
    Node* newNode = new Node{value, nullptr};

    if (rear == nullptr) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    cout << value << " inserted into queue\n";
}

void dequeue() {
    if (front == nullptr) {
        cout << "Queue Underflow\n";
        return;
    }

    Node* temp = front;
    cout << temp->data << " deleted from queue\n";

    front = front->next;

    if (front == nullptr)
        rear = nullptr;

    delete temp;
}

void peek() {
    if (front == nullptr)
        cout << "Queue is empty\n";
    else
        cout << "Front element: " << front->data << endl;
}

void display() {
    if (front == nullptr) {
        cout << "Queue is empty\n";
        return;
    }

    Node* temp = front;
    cout << "Queue elements: ";

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Peek\n";
        cout << "4. Display\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                dequeue();
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
    while (front != nullptr) {
        Node* temp = front;
        front = front->next;
        delete temp;
    }
    rear = nullptr;

    return 0;
}
