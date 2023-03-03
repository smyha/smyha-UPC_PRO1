#include<iostream>
using namespace std;
// Action for print the words in inversed order.
void InversedOrder(){
    string word;
    cin >> word;
    if (word != "end"){
        InversedOrder();
        cout << word << endl;
    }
}

int main(){
    InversedOrder();
}