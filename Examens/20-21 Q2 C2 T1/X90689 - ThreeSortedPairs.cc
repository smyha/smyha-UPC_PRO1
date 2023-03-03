#include<iostream>
using namespace std;

bool is_three_sorted(int a, int b) {
    if (a%3 == 0 and b%3 == 0) return is_three_sorted(a/3, b/3);
    return not(a%3 != 0 and b%3 == 0);
}

int main(){
    int x, y;
    while(cin >> x >> y){
        if (is_three_sorted(x, y)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}