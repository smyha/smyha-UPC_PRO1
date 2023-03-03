#include<iostream>
using namespace std;

void cross(int n, char c){
    for (int height = 1; height <= n; ++height){
        // First and Second lines of the cross
        if (height != (n/2) + 1){
            for (int longh = 1; longh <= (n/2)+1; ++longh){
                if (longh == (n/2) + 1) cout << c;
                else cout << ' ';
            }
        }
        // Middle line of the cross
        else {
            for (int longh2 = 1; longh2 <= n; ++longh2) cout << c;
        }
        cout << endl;
    }
}
int main (){
    int n;
    char c;
    cin >> n >> c;
    cross (n,c);
}

