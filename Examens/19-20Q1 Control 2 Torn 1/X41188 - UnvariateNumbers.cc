// X41188 - Univariate numbers
#include<iostream>
using namespace std;
// Recursive function
bool is_univariate(int n){
    if (n < 10) return true;
    if (n%10 == (n/10)%10) return is_univariate(n/10);
    return false;
}

int main(){
    int n;
    int position = 1;
    cin >> n;
    while (n != -1 and not is_univariate(n)){
        cin >> n;
        ++position;
    }
    if (n != -1) cout << position << endl;
    else cout << 0 << endl;
}