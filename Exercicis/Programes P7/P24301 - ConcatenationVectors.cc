#include<iostream>
#include<vector>
using namespace std;
vector<int> concatenation(const vector<int>& v1, const vector<int>& v2){
    int Size1 = v1.size();
    int Size2 = v2.size();
    vector <int> v(Size1 + Size2);
    // Emma Rollon's method
    // for (int i = 0; i < n1 ; ++i ) res [i] = v1 [i] ;
    // for (int i = 0; i < n2 ; ++i ) res [n1 + i] = v2 [i] ;
    // Easy method
    for (int i = 0; i < Size1 + Size2; ++i){
        if (i < Size1) v[i] = v1[i];
        else v[i] = v2[i - Size1];
    }
    return v;
}
