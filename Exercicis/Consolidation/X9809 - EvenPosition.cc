#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int SumOfOdd = 0;
    int SumOfEven = 0;
    
    for (int i = 0; n != 0; ++i){
        if (i%2 == 0) SumOfEven += n%10;
        else SumOfOdd += n%10;
        n /= 10;
    }
    cout << SumOfEven << ' ' << SumOfOdd << endl;

    if (SumOfEven >= SumOfOdd and SumOfOdd != 0) {
        if (SumOfEven%SumOfOdd != 0) cout << "nothing" << endl;
        else cout << SumOfEven << " = " << SumOfEven/SumOfOdd << " * " << SumOfOdd << endl;
    }
    else if (SumOfOdd >= SumOfEven and SumOfEven != 0) {
        if (SumOfOdd%SumOfEven != 0) cout << "nothing" << endl;
        else cout << SumOfOdd << " = " << SumOfOdd/SumOfEven << " * " << SumOfEven << endl;
    }
    else if (SumOfOdd == 0 or SumOfEven == 0) {
        if (SumOfOdd == 0) cout << "0 = 0 * " << SumOfEven << endl;
        else if (SumOfEven == 0) cout << "0 = 0 * " << SumOfOdd<< endl;
    }
}
