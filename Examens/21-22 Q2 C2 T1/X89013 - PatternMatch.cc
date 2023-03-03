//X89013 - PatternMatch.cc
#include<iostream>
#include<vector>
using namespace std;
//pre: ....write documentation...
//
//post: ...write documentation----
bool pattern_match (const string& pattern, string word) {
    int i = 0;
    int k = word.size() - 1;
    
    if (word.size() < pattern.size() - 1) return false;
    while (pattern[i] != '*'){
        if (pattern[i] != word[i]) return false;
        ++i; 
    }
    for (int j = pattern.size() - 1; j >= i + 1 ; --j){
        if (pattern[j] != word[k]) return false;
        --k;
    }
    return true;
}

int main() {
    string pattern;
    int num_words;
    
    while (cin >> pattern >> num_words){
        string word;
        cout << pattern << ':' << endl;
        for (int i = 0; i < num_words; ++i){
            cin >> word;
            if (pattern_match(pattern, word)) cout << "    " << word << endl;
        }
    }
}   