//F011B. Palíndroms més llargs
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void read_vector (vector <string>& v){
    int size = v.size();
    for (int i = 0; i < size; ++i){
        cin >> v[i];
    }
}

bool es_palindrom(string s){
    int size = s.size();
    for (int i = 0; i < size/2; ++i){
        if (s[i] != s[size -1 - i]) return false;
    }
    return true;
}

int maximum_length (const vector<string>& v){
    int size = v.size();
    int MaxLength = 0;
    for (int i = 0; i < size; ++i){
        if (es_palindrom(v[i]) and v[i].length() > MaxLength) MaxLength = v[i].size();
    }
    return MaxLength;
}

int main(){
    int number;
    cin >> number;

    while (number != 0){
        // Read the sequence
        vector<string> v(number);
        read_vector(v);
        // Found the maximum Lenght
        int length = maximum_length(v);
        
        cout << "-----" << endl;        
        bool found = false;
        for (int i = 0; i < number; ++i){
            if (es_palindrom(v[i]) and v[i].length() == length) {
                cout << v[i] << endl;
                found = true;
            }   
        }
        if (not found) cout << "cap palindrom" << endl;    
        cin >> number;
    }
    cout << "-----" << endl;
} 
