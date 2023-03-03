#include <iostream>
using namespace std;

void infoSequence(int& max, int& lpos){
    int n;
    int count = 1;
    max = -1;
    cin >> n;
    while (n != 0){
        if (n >= max) {
            max = n;
            lpos = count;
        }
        ++count;
        cin >> n;
    }
}
int main () {
    int max, lpos;
    int fpos = 0;
    infoSequence (max,lpos);
    int x;
    cin >> x;
    bool found = false;
    while (not found and x != 0){
        if (max == x) found = true;
        ++fpos;
        cin >> x;
    }
    if (not found) cout << max << ' ' << lpos << ' ' << '-' << endl;
    else cout << max << ' ' << lpos << ' ' << fpos << endl;
}