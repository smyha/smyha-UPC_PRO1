//A wash cycle always takes less than 24 hours. Write a program that, 
// given the start and end times of a washing cycle, calculates the elapsed time in the cycle.

#include <iostream>
using namespace std;

int main() {
 int h0,m0,h1,m1;
 cin >> h0 >> m0 >> h1 >> m1;
 // If last minutes are minor than first minutes
 if (m1 < m0){
     m1 += 60;
     --h1;
 }
//  If last hour are minor than first hour
 if (h1 < h0) h1 += 24;
 
 cout << (h1 - h0)/10 << (h1 - h0)%10 << ':' << (m1-m0)/10 << (m1-m0)%10 << endl;
 
}