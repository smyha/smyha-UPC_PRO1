//X93206 - Different Names
#include<iostream>
#include<vector>
using namespace std;

void read_vector(vector<string>& names, int size){
    for(int i = 0; i < size; ++i){
        cin >> names[i];
    }
}

int main(){
    int n;
    while(cin >> n){
        vector<string> names(n);
        read_vector(names, n);
        
        for (int i = 0; i < n; ++i){
            bool repited = false;
            for (int j = 0; j < i; ++j){
                if (names[i] == names[j]) repited = true;
            }
            if (not repited) cout << names[i] << endl;
        }
        cout << endl;
    }
}
