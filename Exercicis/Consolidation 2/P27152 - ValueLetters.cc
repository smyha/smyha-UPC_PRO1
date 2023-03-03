// P27152 - The value of the letters
#include<iostream>
using namespace std;

int main(){
    int counter = 0;
    char c;
    while (cin >> c){
        if (c == 'a' or c == 'e') counter += 1;
        else if (c == 'o' or c == 's') counter += 2;
        else if (c == 'd' or c == 'i' or c == 'n' or c == 'r') counter += 3;
        else if (c == 'c' or c == 'l' or c == 't' or c == 'u') counter += 4;
        else if (c == 'm' or c == 'p') counter += 5;
        else if (c == 'k' or c == 'w') counter += 7;
        else counter += 6;
    }
    cout << counter << endl;
}