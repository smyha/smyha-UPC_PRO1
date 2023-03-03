#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        int loss_points = 0;
        string color, next_card;
        cin >> color >> next_card; 
        while (next_card != "end"){
            if (next_card != "multicolor" and next_card != color){
                ++loss_points;
                color = next_card;
            }
            cin >> next_card;
        }
        cout << loss_points << endl;
    }
}  