#include <iostream>
using namespace std;

int main(){
    char p;
    int x = 0;
    int y = 0;

    while (cin >> p){
        if (p == 'e') ++x;
        else if (p == 's') ++y;
        else if (p == 'n') --y;
        else --x;
    }
    cout << "(" << x << ", " << y << ")" << endl;
}