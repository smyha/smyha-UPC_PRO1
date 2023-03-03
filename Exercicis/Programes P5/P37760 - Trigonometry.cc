 #include<iostream>
#include<cmath>
using namespace std;

int main(){
    double angle;
    // Read each angle to mesure
    while (cin >> angle){
    // Set the precision
	cout.setf(ios::fixed);
	cout.precision(6);

	// Convert angle to radians
	angle *= M_PI/180;

	cout << sin(angle) << ' ' << cos(angle) << endl;
        
    }
}
