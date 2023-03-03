#include<iostream>
#include<vector>
using namespace std;

void read_data(vector<int>& v){
    int size = v.size();
    for (int i = 0; i < size; ++i){
        cin >> v[i];
    }
}

double average_of_even(const vector<int>& v){
    int size = v.size();
    double amount = 0;
    double counter = 0;
    for (int i = 0; i < size; ++i){
        if (v[i]%2 == 0){
           amount += v[i];
           ++counter; 
        } 
    }
    return amount/counter;
}
// Pre: --
// Post: returns the position of the last element in v smaller than x, -1 if that element does not exist
int last_position_of(const vector<int>& v, double x){
    int size = v.size();
    int position = -1;
    for (int i = 0; i < size; ++i){
        if (v[i] < x) position = i;
    }
    return position;
}

int main(){
    int n;
    while (cin >> n){
        vector<int> v(n);
        read_data(v);
        cout << last_position_of(v, average_of_even(v)) << endl;
    }
}