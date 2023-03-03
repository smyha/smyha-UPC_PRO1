#include<iostream>
#include<vector>
using namespace std;
// funtion to prove if a string is palindrome or not.
bool is_palindrome(const string& s){
    int size = s.size();
    for (int i = 0; i < size/2; ++i){
        if (s[i] != s[size -1 - i]) return false; 
    }
    return true;  
}

int main(){
    string word;
    cin >> word;

    if (is_palindrome(word)) cout << word << " is palindrome." << endl;
    else cout << word << " is not palindrome." << endl;
}