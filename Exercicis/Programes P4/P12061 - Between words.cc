#include<iostream>
using namespace std;

int main(){
    string words;
    int counter = 0;
    bool start= false;

    while (cin >> words and words != "end"){
        if (start) ++ counter;
        if (words == "beginning") start = true;
    }
    if (start and words == "end") cout << counter << endl;
    else cout << "wrong sequence" << endl;
}