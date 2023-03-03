//X82423 - Constant Chains
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        int input;                                          // Declare the current data and the previous one
        int prev = -2;

        int start = 1;                                      // Declare the variable to save the value of the position 
        int max_start = 1;                                  // where begins the largest chain of the secuence
                                       
        int length = 1;                                     // Declare the variable to save the value of the length of the
        int max_length = 1;                                 // largest chain of the entire secuence
        
        cin >> input;
        while (input != -1){
            if (input == prev){
                ++length;
                if (length > max_length){
                    max_length = length;
                    max_start = start - length + 1;         // Obtain the difference beetwen the lenght and the start of the chain.
                }
            }
            else length = 1;
            ++start;
            prev = input;
            cin >> input;
        }
        cout << max_start << ' ' << max_length << endl;
    }
}