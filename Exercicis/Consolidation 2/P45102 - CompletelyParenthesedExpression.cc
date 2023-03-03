#include<iostream>
using namespace std;

int math() {
    char input;
    cin >> input;
    
    if (input == '(') {
        int left = math();
        cin >> input;
        if (input == '+') return left + math() + math();
        if (input == '-') return left - math() + math();
        if (input == '*') return left * math() + math();
    }
    if (input == ')') return 0;

    return input - '0';
}

int main(){
    cout << math() << endl;
}