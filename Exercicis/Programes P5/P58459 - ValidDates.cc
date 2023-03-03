#include<iostream>
using namespace std;

bool IsLeapYear (int year){
    return  (year%4 == 0 and year%100 != 00) or (year%4 == 0 and (year/100)%4 == 0 ); 
}
// Precondition: The parameter y is between 1800 and 9999, both included.
// Information: https://www.mundoprimaria.com/recursos-matematicas/el-calendario
bool is_valid_date(int d, int m, int y){
    // If the dates are in negative
    if (d <= 0 or m <= 0 or d > 31 or m > 12) return false;
    // Cases of months of 30 days
    else if ((m == 4 or m == 6 or m == 9 or m == 11) and d > 30) return false;
    // Cases of months of 31 days
    else if ((m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12) and d > 31) return false;
    // Case February (m == 2)
    else if (m == 2 and ((not IsLeapYear(y) and d > 28) or (IsLeapYear(y) and d > 29 ))) return false;

    return true;
}

int main(){
    int day, month, year;
    
    while (cin >> day >> month >> year){
        if (is_valid_date(day, month, year)) cout << "correct date." << endl;
        else cout << " not correct date." << endl;
    }

}