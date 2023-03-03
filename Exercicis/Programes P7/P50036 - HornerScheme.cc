// Problem solved applying horner's method
#include<iostream>
#include<vector>
using namespace std;

int evaluate(const vector<int>& p, int x){
    int result = 0;
    int PSize = p.size();

    for (int i = PSize - 1; i > 0; --i) result = (p[i] + result)*x;
    result += p[0];
    
    return result;
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