//P29094 - Position of the maximum 
#include<iostream>
#include<vector>
using namespace std;

int position_maximum (const vector<double>& v, int m){
    int pos_max = 0;
    double maximum = v[0];
    for (int i = 1; i <= m; ++i){
        if (v[i] > maximum) {
            pos_max = i;
            maximum = v[i];
        }
    }
    return pos_max;
}

int main(){

}