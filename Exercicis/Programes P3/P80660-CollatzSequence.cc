/* Let n be any strictly positive natural number. 
Consider the following process. If n is an even number, we divide it by two. 
Otherwise, we multiply it by 3 and add 1 to it. When we reach 1, we stop. */

#include <iostream> 
using namespace std;

int main(){
    int number, count = 0;

    while (cin >> number){
        while (number != 1){
            if (number%2 == 0){
                number /= 2;
                ++ count;
            }
            else {
                number = (number * 3) + 1;
                ++count;
            }
        }
    cout << count << endl;
    count = 0;
    }
}