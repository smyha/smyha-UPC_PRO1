#include <iostream>
using namespace std;

int main(){
    int first_number, numbers;
    int counter = 0;
    cin >> first_number;
    
    cout << "nombres que acaben igual que " << first_number << ":" << endl;

    while (cin >> numbers){
        if (numbers%10 == first_number%10 and numbers%100 == first_number%100 and numbers%1000 == first_number%1000){
            cout << numbers << endl;
            ++counter;
        }
    }
    cout << "total: " << counter << endl;
}
