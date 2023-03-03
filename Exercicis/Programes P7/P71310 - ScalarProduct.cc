#include<iostream>
#include<vector>
using namespace std;
// Precondition: The vectors u and v have the same size.
// Information: https://cutt.ly/zMUbVZI or https://cutt.ly/kMUW9cY
double scalar_product(const vector<double>& u, const vector<double>& v){
    double AmountPosition = 0;
    int size = u.size();
    
    for (int i = 0; i < size; ++i){
        AmountPosition += u[i]*v[i]; 
    }
    return AmountPosition;

}

int main(){
    int number;

    cout.setf(ios::fixed);
    cout.precision(4);
    
    while(cin >> number){
        vector <double> u (number);
        vector <double> v (number);
        for (int i = 0; i < number; ++i) cin >> u[i];
        for (int i = 0; i < number; ++i) cin >> v[i];
        cout << scalar_product(u, v);
    }
}