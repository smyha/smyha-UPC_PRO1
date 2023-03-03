// Problem solved applying horner's method
#include<iostream>
#include<vector>
using namespace std;

int evaluate(const vector<int>& p, int x){
    double eval = 0;
    int degree = p.size() - 1;

    for (int i = degree; i >= 0; --i) {
        eval = eval*x + p[i];
    }
    return eval;
}

int main(){
    int grade;
    cin >> grade;
    
    vector <int> p (grade);
    for (int i = 0; i < grade; ++i) {
        cin >> p[i];
        cout << p[i] <<' ';
    }
    cout << endl;

    int x; 
    cin >> x;
}