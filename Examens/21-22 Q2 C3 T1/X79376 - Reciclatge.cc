#include<iostream>
using namespace std;

int main(){
    string province;
    while (cin >> province){
        int first_max = -1;
        int second_max = -1;
        int data;
        cin >> data;
        while (data != -1){
            if (data > first_max){
                second_max = first_max;
                first_max = data;
            }
            else if (second_max < data){
                second_max = data;
            }
            cin >> data;
        }
        cout << province << ": " << first_max << ' ' << second_max << endl; 
    }
}