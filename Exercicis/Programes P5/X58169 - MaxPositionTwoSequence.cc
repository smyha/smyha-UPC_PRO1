#include<iostream>
using namespace std;

void infoSequencia(int& max, int& lpos){
    // Reading of the first sequence and the search for the maximum    
    int max_position = 0, position = 1;
    int prev, next;
    cin >> prev >> next;
    while (next != 0){
        ++position;
        if (prev <= next){
            max = next;
            max_position = position;
        } 
        prev = next;
        cin >> next;
    }
    cout << max << ' ' << max_position << ' ';
    // Reading the second sequence and search the position where is the maximum of the previos sequence
    int number;
    int position1 = 1;
    cin >> number;
    bool found = false;
    
    while (not found and number != 0){
        // Condition
        if (number == max){
            found = true;
            lpos = position1;
        } 
        // Count each position
        ++position1;
        // Read next number
        cin >> number;
    }
    if (found) cout << lpos << endl;
    else cout << '-' << endl;
}
int main(){
    int s1, s2;
    infoSequencia (s1, s2);
}
