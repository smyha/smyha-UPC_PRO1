#include<iostream>
using namespace std;
// Action to print the inversed order of the words
int InversedOrder(int number){
    string word;
    if (cin >> word){
        int num = InversedOrder(number + 1);
        if (number <= num/2) cout << word << endl;
        return num;
    }
    return n - 1;
}

int main(){
    int number;
    cin >> number;
    InversedOrder(number);
}