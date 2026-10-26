
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void countingSort(int arr[], int n) {
    if (n <= 0)
        return;

    int maxVal = *max_element(arr, arr + n);
    int minVal = *min_element(arr, arr + n);

    int range = maxVal - minVal + 1;
    vector<int> count(range, 0);

    // Count frequency of each element
    for (int i = 0; i < n; i++) {
        count[arr[i] - minVal]++;
    }

    // Reconstruct the sorted array
    int index = 0;
    for (int i = 0; i < range; i++) {
        while (count[i] > 0) {
            arr[index++] = i + minVal;
            count[i]--;
        }
    }
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Enter a size between 1 and 100.";
        return 0;
    }

    int arr[100];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    countingSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
