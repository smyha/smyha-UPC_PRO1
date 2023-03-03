//X8041 - Decreasing Pits
#include<iostream>
using namespace std;

void operate_data(){
    bool first = true;                                                  // For security, we can use to a int preDAta = currentData + 1 | predata = currentData (loop).
    int currentData, nextData, minorData;
    int counterData = 0;
    cin >> currentData >> nextData;
    minorData = currentData;
    while (nextData != 0){
        if (first and currentData < nextData) ++ counterData;          
        if (currentData < minorData and currentData < nextData) ++counterData;
        if (currentData < minorData) minorData = currentData;        
        currentData = nextData;
        cin >> nextData;
        first = false;
    }
    cout << counterData << endl;
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        operate_data();                                                 // Can be done without using the function 'operate_data'.
    }
}