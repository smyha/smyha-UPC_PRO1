#include <iostream>
using namespace std;

void toPrintSymbols (int col, int row) {
    int res = 0;
    bool row_pair;
    for (int i = 0; i < col; ++i) {
        if(i%2 == 0){
            row_pair = true;
        } else {
            row_pair = false;
        }
        for(int j = 0; j < row; ++j) {
            char cha;
            cin >> cha;

            if(row_pair and j%2 == 0){
                res += int(cha) - int('0');
            }
            if(!row_pair and j%2 != 0){
                res += int(cha) - int('0');
            }
        }
    }

    cout << res << endl;
}

int main() {
    // col = column, row = row, cha = character introduced
    int col, row;
    cin >> col >> row;
    toPrintSymbols(col, row);
}