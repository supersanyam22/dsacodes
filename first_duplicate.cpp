
#include <iostream>
#include <unordered_set>
using namespace std;

int firstDuplicate(int arr[], int n) {
    unordered_set<int> seen;

    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            return arr[i];
        }
        seen.insert(arr[i]);
    }

    return -1; // No duplicate found
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = firstDuplicate(arr, n);

    if (result != -1)
        cout << "First duplicate element: " << result;
    else
        cout << "No duplicate found.";

    return 0;
}
