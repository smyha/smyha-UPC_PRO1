#include<iostream>
using namespace std;

int main(){
    char word;
    while (cin >> word){
        int wcounter = 0;
        char pre = '#';                                   // Only can be a letter or end '#'.
        bool notA = true;
        while (word != '$'){
            if (pre != '#' and word == '#'){              // Word End
                    if (notA) ++wcounter;
                    notA = true;
            }
            else if (word == 'a') notA = false;
            pre = word;
            cin >> word;
        }
        if (notA and pre != '#') ++wcounter;             // Sum to count if it's the last notA word;
        cout << wcounter << endl;
    }
}