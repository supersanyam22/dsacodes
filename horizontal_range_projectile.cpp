
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double u, angle, g = 9.8;

    cout << "Enter initial velocity (m/s): ";
    cin >> u;

    cout << "Enter angle of projection (degrees): ";
    cin >> angle;

    double rad = angle * acos(-1.0) / 180.0;

    double range = (u * u * sin(2 * rad)) / g;

    cout << "Horizontal range: " << range << " meters" << endl;

    return 0;
}
