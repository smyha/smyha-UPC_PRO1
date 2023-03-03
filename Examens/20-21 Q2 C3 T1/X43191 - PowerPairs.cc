#include <iostream>
using namespace std;
// Pre: n >= 0, base > 1
// Post: returns true when n is a power of base.
//       returns false otherwise
int pow (int a, int b) {
  if (b == 0) return 1;
  int mult = a;
  for (int i = 1; i < b; ++i) mult *= a;
  return mult;
}

bool is_power(int n, int base) {
  int i = 0;
  int d = pow(base,i);
  while (d <= n) {
    if (d == n) return true;
    ++i;
    d = pow(base,i);
  }
  return false;
}
//Pre: a, b, > 0;
//Post: Retorna tru si a i b formen un power_pair (son potencies de la mateixa base)
//Retorna false en cas contrari
bool power_pair(int a, int b) {
  if (a == 1 or b == 1 or a == b) return true;
  int base_i = 2;
  while (base_i <= a and base_i <= b) { //Comprovem per totes les bases fins arribar a a i b si aquestes son base d'ambdos nombres.
    if ((is_power(a,base_i)) and (is_power(b,base_i))) return true;
    ++base_i;
  }
  return false;
}

int main() {
  int a, b;
  while (cin >> a) {
    int sum_pairs = 0;
    cin >> b;
    while (b != 0) {
      if (power_pair(a,b)) ++sum_pairs;
      a = b;
      cin >> b;
    }
    cout << sum_pairs << endl;
  }
}