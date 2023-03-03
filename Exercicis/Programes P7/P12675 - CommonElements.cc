#include<iostream>
#include<vector>
using namespace std;
//Precondition:The two vectors are in strictly increasing order (Dichotomous search)
//Postcondition: Returns the number of common elements in the two vectors, that is, the number of integer numbers a such that a=X[i]=Y[j] for any i and j.
int common_elements(const vector<int>& X, const vector<int>& Y){
    int CommonElements = 0;
    int SizeX = X.size();
    int SizeY = Y.size();
    // State variables as a read counter of the vector deck
    int i = 0;
    int j = 0;

    while (i < SizeX and j < SizeY){
        if (X[i] < Y[j]) ++i;
        else if (Y[j] < X[i]) ++j;
        else {
            ++CommonElements;
            ++i;
            ++j;
        }
    }
    return CommonElements;
}
// At Jutge Compilator, take out the main function
int main(){
    int lenghx, lenghy;
    cin >> lenghx >> lenghy;
    
    vector <int> X (lenghx);
    vector <int> Y (lenghy);
    // Read both vectors
    for (int i = 0; i < lenghx; ++i) cin >> X[i];
    for (int j = 0; j <lenghy; ++j) cin >> Y[j];

    cout << common_elements(X, Y) << endl;
} 
