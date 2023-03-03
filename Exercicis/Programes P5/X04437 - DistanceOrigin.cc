#include<iostream>
#include<cmath>
using namespace std;

double dist_or(double x, double y){
    return sqrt(x*x + y*y);
}

int main(){
    int axis_x,axis_y;
    cin >> axis_x >> axis_y;
    cout << dist_or(axis_x, axis_y) << endl;
}