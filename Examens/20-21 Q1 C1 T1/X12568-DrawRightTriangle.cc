// Draw the outline of a right triangle of size n as shown in the examples.

#include<iostream>
using namespace std;

int main(){
    int height;
    cin >> height;
    
    // First Line
    for (int base = 1; base <= height; ++base){
        cout << '*';
    }
    cout << endl;
    // Middle lines (All the lines except last line)
    for (int longh = 1; longh < height - 1; ++longh){
        for (int j = 0; j < height; ++j){
            if (j == longh or j == height -1) cout << '*';
            else cout << ' ';
        }
        cout << endl;
    }
    // Final line
    for (int i = 0; i < height -1; ++i)cout << ' ';
    cout << '*' << endl;
}