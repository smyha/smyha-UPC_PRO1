#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void ReadVector(vector <int>& v){
    int size = v.size();
    for (int i = 0; i < size; ++i){
        cin >> v[i];
    }
}

bool decreasing(int a, int b){
    if (a > b) return true;
    return false;
}

int main(){
    int n;

    while (cin >> n){
        // Read vector
        vector <int> v (n);
        ReadVector(v);
        // Sort vector
        sort (v.begin(), v.end(), decreasing);
        // Return the modified vector
        for (int i = 0; i < n; ++i){
            cout << v[i];
            if (i != n -1) cout << ' ';
        }
        cout << endl;
    }
}