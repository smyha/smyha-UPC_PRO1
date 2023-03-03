// X50401 - Null Triplets
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int total = 0;

    for (int i = 0; i < n; ++i){
        int subtotal = 0;
        int size, a, b, c;
        cin >> size >> a >> b;
        for (int j = 2; j < size; ++j){
            if (cin >> c){
                if (b == a + c) ++subtotal;
                a = b;
                b = c;
            }
        }              
        cout << subtotal << endl;
        total += subtotal;
    }
    cout << "Total: " << total << endl;
}