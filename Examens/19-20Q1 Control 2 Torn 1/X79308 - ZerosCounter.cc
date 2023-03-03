#include<iostream>
#include<vector>
using namespace std;

void zeros_counter(const vector<int>& u, vector<int>& v){
    int Vsize = u.size();
    v = vector<int>(Vsize);
    int counter = 0;
    for (int j = Vsize - 1; j >= 0; --j){
        if (u[j] == 0) ++counter;
        v[j] = counter;
    }
}

int main(){
    int size;
    cin >> size;
    vector<int> u (size);
    for (int i = 0; i < size; ++i) cin >> u[i];
    vector<int> v;
    zeros_counter(u, v);
    for (int i = 0; i < size; ++i) cout << v[i] << endl;
}