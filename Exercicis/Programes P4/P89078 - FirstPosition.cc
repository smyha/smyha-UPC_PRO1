#include <iostream>
using namespace std;

int main(){
    int numbers;
    int counter = 1 ;

    while (cin >> numbers and numbers%2 == 1)++counter;
    cout << counter << endl;
}