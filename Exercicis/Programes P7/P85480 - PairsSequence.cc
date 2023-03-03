#include<iostream>
#include<vector>
using namespace std;
// 1
void ReadSequence (vector <int> &sequence){
    int size = sequence.size();
    for (int i = 0; i < size; ++i) cin >> sequence[i];
}
// 2
bool IsPrime(int n2){
    if (n2 < 2) return false;
    for (int i = 2; i*i <= n2; ++i){
        if (n2%i == 0) return false;
    }
    return true;
}
// 3
bool IsPairPrime (int n3){
    bool found = false;

    vector <int> sequence(n3);
    ReadSequence(sequence);
    
    int CurrentPosition = 0;

    while (not found and CurrentPosition < n3){
        int ReadPosition = CurrentPosition + 1; // Don't read the current position !
        
        while (not found and ReadPosition < n3){
            if (ReadPosition != CurrentPosition) found = IsPrime(sequence[CurrentPosition]+ sequence[ReadPosition]);
            ++ReadPosition;
        }
        ++CurrentPosition;
    }
    return found;
}
   
int main(){
    int number;
    while (cin >> number){
        if (IsPairPrime(number)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
} 
