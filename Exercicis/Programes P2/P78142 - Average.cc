#include <iostream>
using namespace std;

int main(){
    
    cout.setf(ios::fixed);
    cout.precision(2);

    double sequence_of_numbers;
    double amount = 0;
    double number_count = 0; 

    while (cin >> sequence_of_numbers) {
        amount += sequence_of_numbers;
        ++ number_count;
    }
     double result = amount/number_count;
     cout << result << endl; 
}