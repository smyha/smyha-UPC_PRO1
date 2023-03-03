// Write a program that reads pairs of numbers n and m with n ≥ m, and for each pair prints Hn − Hm.

#include <iostream>
using namespace std;

int main() {
    // n and m are natural numbers: n, m > 0
    int n, m;

    while (cin >> n >> m) {
        double sum = 0;

        // Calc of the harmonic numbers Hn - Hm without counting the common numbers
        for (int i = m + 1; i <= n; ++i) sum += 1/double(i);

        cout.setf(ios::fixed);
        cout.precision(10);

        cout << sum << endl;
    }
}