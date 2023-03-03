/* Consider a chess board with r rows and c columns, where every square contains between 0
and 9 coins. Supose that the upper-left square is white.
Write a program such that, given a chess board, computes the total number of coins on its white squares.
*/
#include <iostream>
using namespace std;

int main() {
    // Rows and columns are natural numbers: rows,columns > 0
    int rows, columns; 
    int number_of_coins = 0; // number_of_coins == sum
    cin >> rows >> columns;
    
    // Read the data from the user and add the numbers to sum
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < columns; ++j){
            char num;
            cin >> num;
             /* 
            If the square is white add to sum
            In odd lines the white squares are in odd positions and in even 
            lines the white squares are in even positions
            */
            if (i%2 == j%2){
                number_of_coins += num - '0';
            }
        }
    }
    cout << number_of_coins << endl;
}

