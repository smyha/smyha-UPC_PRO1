//X12617 - Compatible Words
#include<iostream>
#include<vector>
using namespace std; 
// Pre: two lowercase words; a non-negative enter d
// Post: returns true if the two words are d-compatible, false otherwise
bool d_compatibles(string w1, string w2, int d) {
    // Check if they have the same size, if they are of different size we return false
    if (w1.size() != w2.size()) return false;
    // Search HammingDistance
    int HammingDistance = 0;
    for (int i = 0; i < w1.size() and HammingDistance <= d; ++i){
        if (w1[i] != w2 [i]) ++HammingDistance;
    }
    return HammingDistance <= d;
}
// Pre: a vector v of lowercase words; a lowercase word w; a non-negative enter d
// Post: returns the first paraula to v d-compatible with w; "--" otherwise
string paraula_compatible(const vector <string> &v, string w, int d) {
    for (int i = 0; i < v.size(); ++i){
        if (d_compatibles(v[i],w,d)) return v[i];
    }
    return "--";
}

int main(){
    int number;                                 // D is non negative number
    cin >> number;
    
    int p;                                      // Large of the sequence P
    cin >> p;
                                                // Full the sequence P
    vector <string> v (p);
    string wordsP;
    for (int i = 0; i < p; ++i) cin >> v[i];
                                                // Read the secuence S and show the compatible word for each one
    string wordsS;
    cin >> wordsS;
    while (wordsS != "STOP"){
        cout << wordsS << ": " << paraula_compatible(v, wordsS, number) << endl;
        cin >> wordsS;
    }
} 
