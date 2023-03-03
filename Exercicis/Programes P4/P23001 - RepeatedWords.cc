#include<iostream>
using namespace std;

int main(){
    string first_word, words;
    int counter = 1;
    int sequence = 1;
    cin >> first_word;

    while (cin >> words){
        if (words == first_word){
            ++counter;
            if(sequence < counter) sequence = counter;
        }
        else counter = 0;
    }
    cout << sequence << endl;
}