#include<iostream>
using namespace std;

void PrintChangeBase(int n, int b){
    if (n/b > 0) PrintChangeBase (n/b, b);
    if (n%b >= 10) cout << char(n%b + 'A'- 10);
    else cout << n%b;
}

int main(){
    int number;
    while (cin >> number){
        int base;
        cout << number << " = ";
        base = 2;
        PrintChangeBase(number, base);
        cout << ", ";
        base = 8;
        PrintChangeBase(number, base);
        cout << ", ";
        base = 16;
        PrintChangeBase(number, base);
        cout << endl;
    }
} 
