// P93090 - Addition of Fractions
#include <iostream>
using namespace std;

struct Fraction {
    int num, den;    // always strictly positive
};

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b) {
    return (a*b)/gcd(a, b);
}

void simplify (Fraction& r) {
    if (r.num == 0) r.den = 1;
    
    else {
        int gcd_num = gcd(r.num, r.den);
        r.num /= gcd_num;
        r.den /= gcd_num;
    }

    if (r.den < 0) {
        r.num = 0 - r.num;
        r.den = 0 - r.den;
    }
}


Fraction addition(const Fraction& x, const Fraction& y){
    Fraction result;

    int lcm_num = lcm(x.den, y.den);

    result.den = lcm_num;
    result.num = x.num*(lcm_num/x.den) + y.num*(lcm_num/y.den);

    simplify(result);

    return result;
}

void operate (Fraction& f, char bar, char op){
    if (op == '+'){
        Fraction f2;
        cin >> f2.num >> bar >> f2.den;
        f = addition(f, f2);

    }
    else cout << f.num << bar << f.den << endl;
}

int main(){
    Fraction frac;
    char bar,operation;
    cin >> frac.num >> bar >> frac.den;
    while (cin >> operation){
        operate(frac,bar, operation);
    }
}