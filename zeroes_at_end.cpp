
#include <iostream>
using namespace std;

int countZeros(int n) {
    int count = 0;

    while (n != 0 && n % 10 == 0) {
        count++;
        n /= 10;
    }

    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Number of trailing zeros: "
         << countZeros(n) << endl;

    return 0;
}
