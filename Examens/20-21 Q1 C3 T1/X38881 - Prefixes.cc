#include<iostream>
#include<vector>
#include<string>
using namespace std;

// Pre: p, pref are strings of lowercase letters
// Post: returns true if pref is a prefix of p, false otherwise
bool prefix (const string & p, const string & pref) {
    int Prefsize = pref.size();
    int i = 0;

    while (i < Prefsize){
        if (p[i] != pref[i]) return false;
        ++i;
    }
    return true;

}

int main(){
    int size;
    int position = 1;
    while (cin >> size){
        int counter_prefixes = 1;
        
        string first_word;
        cin >> first_word;

        for (int i = 1; i < size; ++i){
            string word;
            cin >> word;

            if (prefix(first_word, word)) ++counter_prefixes;
        }

        cout << "Linea " << position << ": " << counter_prefixes << " - " << first_word << endl;
        ++position;
    }
}