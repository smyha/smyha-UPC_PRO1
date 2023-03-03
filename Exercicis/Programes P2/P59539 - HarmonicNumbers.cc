# include <iostream>
using namespace std;

int main (){

    double n, divisio;
    cin >> n;
    divisio = 0;
    cout.setf(ios::fixed);
    cout.precision(4);

    for (double i = 1; i <= n; ++i)
        divisio += 1/i;
        
        
    cout << divisio << endl;
}