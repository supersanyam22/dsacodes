
#include <iostream>
using namespace std;

#define SIZE 100

int heap[SIZE];
int n = 0;

void insert(int value) {
    if (n == SIZE) {
        cout << "Heap is full\n";
        return;
    }

    int i = n++;
    heap[i] = value;

    // Restore max-heap property
    while (i > 0 && heap[(i - 1) / 2] < heap[i]) {
        swap(heap[i], heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }

    cout << value << " inserted\n";
}

void deleteRoot() {
    if (n == 0) {
        cout << "Heap is empty\n";
        return;
    }

    cout << heap[0] << " deleted\n";
    heap[0] = heap[--n];

    int i = 0;

    // Restore max-heap property
    while (true) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && heap[left] > heap[largest])
            largest = left;

        if (right < n && heap[right] > heap[largest])
            largest = right;

        if (largest == i)
            break;

        swap(heap[i], heap[largest]);
        i = largest;
    }
}

void display() {
    if (n == 0) {
        cout << "Heap is empty\n";
        return;
    }

    cout << "Heap elements: ";
    for (int i = 0; i < n; i++)
        cout << heap[i] << " ";

    cout << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n1. Insert\n2. Delete Root\n";
        cout << "3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                insert(value);
                break;

            case 2:
                deleteRoot();
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
