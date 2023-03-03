// P40129 - ISBNCodes.cc
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s;
    while (cin >> s){
        int amount = 0, pos_unknown = 0;
        // Obtain the amount of the ISBN code and the unknown digit position.
        for (int i = 0; i < s.size(); ++i){
            if (s[i] >= '0' and s[i] <= '9') amount += (10 - i) * (s[i] - '0');
            else if (s[i] == '?') pos_unknown = 10 - i;
            else if (s[i] == 'X') amount += 10; // or else 
        }
        // Compute the required value for which the code is valid 
        int unknown = 0;
        while ((amount + unknown*pos_unknown)%11 != 0) ++ unknown;
        if (unknown == 10) cout << 'X' << endl;
        else cout << unknown << endl;
    }
}