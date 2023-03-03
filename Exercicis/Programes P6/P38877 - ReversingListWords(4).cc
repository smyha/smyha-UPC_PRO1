#include<iostream>
using namespace std;
// Action to print the inversed order of the words
int InversedOrder(int number){
    string word;
    if (cin >> word){
        int num = InversedOrder(number);
        if (num < number) cout << word << endl;
        return num + 1;
    }
    return 0;
}

int main(){
    int number;
    cin >> number;
    InversedOrder(number);
}