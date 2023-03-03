// P41412 - Insertion into a sorted table
#include<iostream>
#include<vector>
using namespace std;

void swap (double&a, double&b){
    double aux = a;
    a = b;
    b = aux;
}

int pos_minim (const vector<double>& v, int from, int to){
    int pos = from;
    for (int i = from + 1; i < to; ++i){
        if (v[i] < v[pos]) pos = i;                         // Sort Algorithm Criteria 
    }    
    return pos;
}

void insertion_sort(vector<double>& v){
    int size = v.size();
    for (int i = 0; i < size; ++i){
        int pos = pos_minim (v, i, size);
        swap(v[i],v[pos]);
    }
}