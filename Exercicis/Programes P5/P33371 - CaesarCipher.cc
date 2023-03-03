#include<iostream>
using namespace std;
const int DIFFERENCE = 'a' - 'z' - 1;

char encoded(char c, int k){
    // Pass the lowercase letter to uppercase letter or and space
    if (c == '_') return ' ';
    else if (c >= 'a' and c <= 'z') return (c -'a' + k)%DIFFERENCE + 'A';
    return c;
}

int main(){
    int number;
    char code;
    while (cin >> number){
        cin >> code;
        while (code != '.'){
            cout << encoded(code, number);
            cin >> code;
        }
        cout << endl;
    }
}
     
