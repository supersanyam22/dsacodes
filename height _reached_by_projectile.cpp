
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double u, angle, g = 9.8;

    cout << "Enter initial velocity (m/s): ";
    cin >> u;

    cout << "Enter angle of projection (degrees): ";
    cin >> angle;

    double rad = angle * M_PI / 180.0;
    double verticalVelocity = u * sin(rad);

    double height = (verticalVelocity * verticalVelocity) / (2 * g);

    cout << "Maximum height reached: " << height << " meters" << endl;

    return 0;
}
