#include<iostream>
#include<vector>
using namespace std;

void read_vector (vector<int>& v){
    int size = v.size();
    for (int i = 0; i < size; ++i){
        cin >> v[i];
    }
}
 
bool found_pairs (int n){
    vector<int> v(n);
    read_vector(v);
    
    bool found = false;
    for (int i = 1; i < n and not found; ++i){
        if ((v[i] + v[i - 1])%2 != 0) found = true;
    }
    return found;
}

int main(){
    int n;
    
    while (cin >> n){        
        if (found_pairs(n)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}