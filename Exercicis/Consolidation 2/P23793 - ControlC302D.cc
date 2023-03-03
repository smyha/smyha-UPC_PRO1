// P23793 - Control C302D
#include<iostream>
#include<string>
using namespace std;

int compara (int d1, int m1, int a1, int d2, int m2, int a2){
    if (a1 != a2) return a1 - a2;
    else if (m1 != m2) return m1 - m2;
    else if (d1 != d2) return d1 - d2;
    return 0;
}

void read_data (string s1, int &d, int &m, int &a){
    int x = 1;
    int countbars = 0;
    int size = s1.length();
    for (int i = size - 1; i >= 0; --i){
        if (s1[i] == '/'){
            x = 1;
            ++countbars;
        }
        else {
            if (countbars == 0) a += (s1[i] - '0')*x;
            else if (countbars == 1) m += (s1[i] - '0')*x;
            else d += (s1[i] - '0')*x;
            x *= 10;
        }
    }
}

int main(){
    string data1, data2;
    while (cin >> data1 >> data2){
        int d1 = 0, m1 = 0, a1 = 0, d2 = 0, m2 = 0, a2 = 0;
        read_data(data1, d1, m1, a1);
        read_data(data2, d2, m2, a2);
        int result = compara(d1, m1, a1, d2, m2, a2);
        if (result > 0) cout << "posterior" << endl;
        else if (result == 0) cout << "iguals" << endl;
        else cout << "anterior" << endl;
    }
}