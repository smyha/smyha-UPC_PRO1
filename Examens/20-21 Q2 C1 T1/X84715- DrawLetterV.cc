#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    const int position = 2*n -1;
    
    for(int longh = 0; longh < n; ++longh){
        for (int rows = 0; rows < position-longh;++rows){
            if (rows == longh or rows == position - 1 - longh) cout << 'V';
            else cout << ' ';
        }
        cout << endl;
    }
}