// // Write a function that tells 
// // if the given year is a leap year or not. 
// To recall the rules about leap years, 
// // check the exercise P61634: “Leap years”.

#include <iostream>
using namespace std;
    bool is_leap_year(int year){
        return (year%4 == 0 and year%100 != 00) or (year%4 == 0 and (year/100)%4 == 0 ); 
    }
int main(){
    int year;
    cin >> year;

}