//Anagrames
#include <iostream>
#include <vector>
using namespace std;
 
const int ABC = 26;
 
typedef vector<int> Row;
 
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        Row alfabet(ABC, 0);
        char c;
        while (cin >> c and c != '.') {
                if (c >= 'A' and c <= 'Z') ++alfabet[c - 'A'];
        }
        while (cin >> c and c != '.') {
                if (c >= 'A' and c <= 'Z') --alfabet[c - 'A'];
        }
        int j = 0;
        bool found = false;
        while (not found and j < ABC) {
                if (alfabet[j] != 0) found = true;
                else ++j;
        }
        if (found) cout << "NO" << endl;
        else cout << "SI" << endl;
    }
}