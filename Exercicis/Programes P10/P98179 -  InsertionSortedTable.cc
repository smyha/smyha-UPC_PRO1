// P98179 - Insertion into a sorted table
#include<iostream>
#include<vector>
using namespace std;

void swap (double&a, double&b){
    double aux = a;
    a = b;
    b = aux;
}

void insert(vector<double>& v){
    int size = v.size() -1;
    double num = v[size];
    for (int i = size; i >= 0; --i){
        if (v[i] > num){
            swap(v[i],v[i+1]);
            num = v[i];
        }
    }
}

int main(){
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i) {
            cin >> V[i];
	}
	insert(V);
	for (int i = 0; i < n; ++i) {
	    cout << " " << V[i];
        }
        cout << endl;
    }
}