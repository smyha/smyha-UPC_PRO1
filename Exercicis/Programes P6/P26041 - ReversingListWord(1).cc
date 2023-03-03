#include<iostream>
using namespace std;
// Function to invert the order
void InversedOrder(){
    string word;
    if (cin >> word){
        InversedOrder();
        cout << word << endl;
    }
}

int main(){
    InversedOrder();
}