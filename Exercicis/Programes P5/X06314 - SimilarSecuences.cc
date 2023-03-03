#include<iostream>
using namespace std;
//Action for obtain the information of each sequence
void info_sequence(int& sum, int& last){
    int number;
    sum = 0;
    last = 0;   
    cin >> number;
    while (number != 0){
        sum += number;
        last = number;
        cin >> number;
    }
}

int main(){
    int sum, last, sum1, last1;
    int counter = 1;
    // Read the first sequence
    info_sequence (sum, last);
    // Read the other sequences 
    info_sequence (sum1, last1);
    while (sum1 != 0){
        if (sum1 == sum and last == last1) ++ counter;
        info_sequence(sum1, last1);
    }
    cout << counter << endl;    
}
 
