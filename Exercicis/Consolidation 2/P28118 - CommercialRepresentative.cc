#include <iostream>
#include <cmath>
using namespace std;

double distancia(double x1, double y1, double x2, double y2) {
    return sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
}

int main() {
    // Set precision
    cout.setf(ios::fixed);
    cout.precision(4);

    string lloc;
    double x1, y1, x2, y2;
    double x, y;
    while (cin >> lloc) {
        cin >> x >> y;
        x2 = x;
        y2 = y;
        double suma = 0;
        cin >> x1 >> y1;
        while (x1 != x or y1 != y) {
            suma += distancia(x1, y1, x2, y2);
            x2 = x1;
            y2 = y1;
            cin >> x1 >> y1;
        }
        suma += distancia(x1, y1, x2, y2);
        cout << "Trajecte " << lloc << ": " << suma << endl;
    }
}