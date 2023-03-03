// Write a program that reads several descriptions of rectangles and circles, and for each one prints its corresponding area.

#include <iostream>
using namespace std;

int main() {

    cout.setf(ios::fixed);
    cout.precision(6);

    int number;
    cin >> number;

    for (int i = 0; i < number; ++i ){
        string type;
        cin >> type;

        double base, height;
        if (type == "rectangle") {
            cin >> base >> height;
            cout << base * height << endl;
        }
        
        else {
            cin >> height;
            double number_pi = 3.141592653589793;
            cout << height * height * number_pi << endl; 

        }
    }
}