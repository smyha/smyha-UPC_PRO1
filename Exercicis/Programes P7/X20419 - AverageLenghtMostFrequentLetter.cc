#include<iostream>
#include <vector>
using namespace std;
const int LENGTH_ALPHABET = 'z' - 'a' + 1; // SCOREBOARD

// Precondition: The input is formed by a natural n > 0 followed by n non-empty words. Each word is formed exclusively by lowercase letters.
// Postcondition: returns the lowercase letter with most occurrences inside the word represented by s (and the smallest in lexicographic order when ties occur).
char most_frequent_letter(const string& s){
    vector <int> alphabet (LENGTH_ALPHABET,0);
    int SizeWord = s.size();
    int SizeAlphabet = alphabet.size();
    
    int max = 0;
    int max2 = 0;
    
    // Count how many times the letter appears in the word and store it in the vector <alphabet>.
    for (int i = 0; i < SizeWord; ++i){
        ++alphabet[s[i] - 'a'];
    }
    for (int j = 0; j < SizeAlphabet; ++j){
        if (alphabet[j] != 0 and alphabet[j] > max) {
            max = alphabet[j];
            max2 = j;
        }
    }
    return char(max2 + 'a');
}
// Obtain the average between the number of letters of the words and the words
void AverageLengh (vector <string> &words){
    double size = words.size();
    int counter = 0;
    
    for (int i = 0; i < size; ++i){
        int size2 = words[i].size();
        for (int j = 0; j < size2; ++j) ++counter;
    }
    double average = counter/size;
    cout << average << endl;

    for (int l = 0; l < size; ++l){
        int SizeWords = words[l].size();
        if (SizeWords >= average) cout << words[l] << ": " << most_frequent_letter(words[l]) << endl;
    }
}

int main(){
    int number;
    cin >> number;
    
    // Set precision
    cout.setf(ios::fixed);
    cout.precision(2);
    
    // Full the vector with strings of the sequence
    vector <string> words(number);
    for (int i = 0; i < number; ++i) cin >> words[i];
    
    // Show the result
    AverageLengh(words);
}