/*Read a rational number given in the form “numerator”/“denominator”, 
and store these two values in num and den, respectively. 
Additionally, you must remove all common factors from num and den*/

#include<iostream>
using namespace std;

// Funtion to obtain the gcd (greater common divisor) / mcd (maximum common divisor)
int gcd_recursive (int num1, int num2){
    if (num2 == 0) return num1;
    return gcd_recursive(num2, num1%num2);
}

// Action to read and proyect a rational number
void read_rational(int& num, int& den){
    char x;
    cin >> num >> x >> den;
    int mcd = gcd_recursive(num, den); 
    num /= mcd; 
    den /= mcd;
 }

int main(){
    int num1, den1;
    read_rational(num1,den1);
    cout << num1 << '/' << den1 << endl;
}

/*Another (most common) way to obtain the greater common divisor
int gcd (int num1, int num2){
    int aux; // For not lose the num2 value
    while (num2 != 0){
        aux = num2;
        num2 = num1%num2;
        num1 = aux;
    }
    return num1;
}
*/