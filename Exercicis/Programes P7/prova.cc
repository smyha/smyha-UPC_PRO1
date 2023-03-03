#include<iostream>
using namespace std;

bool SameDigits (int x, int y, int b){
    //Descompose each number    
    int product = x*y;

    int digits1 = 0;
    int digits2 = 0;
    int digits3 = 0;

    int AmountDigitsX = 0;
    int AmountDigitsY = 0;
    int AmountDigitsXY = 0;
    
    while (x != 0){
        AmountDigitsX += x%b;
        x /= b;
        ++digits1;
    }
    while (y != 0){
        AmountDigitsY += x%b;
        y /= b;
        ++digits2;
    }
    while(product != 0){
        AmountDigitsXY = product%b;
        product /= b;
        ++digits3;
    }
    if ((digits1 + digits2 == digits3) and (AmountDigitsX + AmountDigitsY == AmountDigitsXY)) return true;
    return false;
}

void PrintResult (int n, int b){
 if (n > 0){
        PrintResult(n/b, b);
        int reminder = n%b;
        if (reminder > 9){
            if (reminder == 10) cout << 'A';
            else if (reminder == 11) cout << 'B';
            else if (reminder == 12) cout << 'C';
            else if (reminder == 13) cout << 'D';
            else if (reminder == 14) cout << 'E';
            else cout << 'F';
        }
        else cout << reminder;
    }
}

int main(){
    int FirstOperand, SecondOperand;
    
    while (cin >> FirstOperand >> SecondOperand){
        cout << "solutions for " << FirstOperand << " and " << SecondOperand << endl;
        for (int base = 2; base <= 16; ++base){
            if (SameDigits(FirstOperand, SecondOperand, base)){ 
                PrintResult(FirstOperand,base);
                cout << " * ";
                PrintResult(SecondOperand,base);
                cout << " = ";
                PrintResult (FirstOperand*SecondOperand,base);
                cout << "( base " << base << ')' << endl;
            }
            else cout << "none of them" << endl;
        }
    }
}