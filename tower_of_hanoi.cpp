
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        cout << "Move disk 1 from " << source
             << " to " << destination << endl;
        return;
    }

    // Move n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move the largest disk to destination
    cout << "Move disk " << n << " from "
         << source << " to " << destination << endl;

    // Move n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n;

    cout << "Enter number of disks: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number of disks." << endl;
        return 0;
    }

    cout << "\nSteps to solve Tower of Hanoi:\n";
    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}
