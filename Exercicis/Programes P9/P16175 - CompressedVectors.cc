// P16175 - CompressedVectors
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Pair {
    int value;                         // Different than zero
    int pos;                           // Greater or equal than zero
};

typedef vector<Pair> Com_Vec;          // Sorted by pos!

Com_Vec get_data(){
    int vsize;
    cin >> vsize;

    Com_Vec data(vsize);
    for (int i = 0; i < vsize; ++i){
        char x;
        cin >> data[i].value >> x >> data[i].pos;
    }
    return data;    
}

void print_vector (Com_Vec& v) {
    int vsize = v.size();   
    cout << vsize;
    for (int i = 0; i < vsize; ++i){
        cout << ' ' << v[i].value << ';' << v[i].pos;
    }
    cout << endl;
}

Com_Vec sum (const Com_Vec& v1, const Com_Vec& v2){
    int v1size = v1.size();
    int v2size = v2.size();

    Com_Vec v3 (v1size + v2size);

    int i = 0, j = 0, k = 0;

    while (i < v1size and j < v2size) {
         // If the first vector value are in lower position than second.
        if (v1[i].pos < v2[j].pos) {
            v3[k] = v1[i];
            ++i;
            ++k;
        }
        // If the second vector value are in lower position than first.
        else if (v1[i].pos > v2[j].pos) {
            v3[k] = v2[j];
            ++j;
            ++k;
        }
        // If they are in the same position.
        else if (v1[i].value + v2[j].value != 0) {
            v3[k].pos = v1[i].pos;
            v3[k].value = v1[i].value + v2[j].value;
            ++i;
            ++j;
            ++k;
        }
        else{
            ++i;
            ++j; 
        }
    }
    while (i < v1size) {
        v3[k] = v1[i];
        ++i;
        ++k;
    }
    while (j < v2size) {
        v3[k] = v2[j];
        ++j;
        ++k;
    }
    Com_Vec result (k);
    for (int r = 0; r < k; ++r) result[r] = v3[r];
    print_vector (result);
    return result;
}

int main(){
    int nvectors;
    cin >> nvectors;

    for (int i = 0; i < nvectors; ++i){
        Com_Vec result = sum(get_data(),get_data());     
    }
}