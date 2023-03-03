// P26141 - Rational Numbers(4)
#include <iostream>
using namespace std;

struct Rational {
    int num, den;
};

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b) {
    return (a*b)/gcd(a, b);
}

void simplify(Rational& r) {
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

Rational add(const Rational& a, const Rational& b) {
    Rational to_return;

    int lcm_num = lcm(a.den, b.den);

    to_return.den = lcm_num;
    to_return.num = a.num*(lcm_num/a.den) + b.num*(lcm_num/b.den);

    simplify(to_return);

    return to_return;
}

Rational substract(const Rational& a, const Rational& b) {
    Rational to_return;

    int lcm_num = lcm(a.den, b.den);

    to_return.den = lcm_num;
    to_return.num = a.num*(lcm_num/a.den) - b.num*(lcm_num/b.den);

    simplify(to_return);
    return to_return;
}

Rational multiply(const Rational& a, const Rational& b) {
    Rational to_return;

    to_return.num = a.num*b.num;
    to_return.den = a.den*b.den;

    simplify(to_return);
    return to_return;
}

Rational divide(const Rational& a, const Rational& b) {
    Rational to_return;

    to_return.num = a.num*b.den;
    to_return.den = a.den*b.num;

    simplify(to_return);
    return to_return;
}

void print(const Rational& num) {
    cout << num.num;
    if (num.den != 1) cout << '/' << num.den;
    cout << endl;
}

int main() {
    Rational num;
    cin >> num.num >> num.den;
    simplify(num);

    print(num);

    string operation;

    while (cin >> operation) {
        Rational input;
        cin >> input.num >> input.den;

        simplify(input);

        if (operation == "add") num = add(num, input);
        else if (operation == "substract") num = substract(num, input);
        else if (operation == "multiply") num = multiply(num, input);
        else num = divide(num, input);
        print(num);
    }
}