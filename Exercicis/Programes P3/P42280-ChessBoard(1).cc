
//get two natural numers r and c, r for rows and c for columns. The read r lines 
//with c chars (characters) between '0' and '9'. Print the sum of the numbers.

#include <iostream>

using namespace std;

int main(){
    int rows, columns;
    int number_of_coins = 0;
    cin >> rows >> columns;

    // Read the data from the user and add the numbers to sum
    for (int i = 0; i < rows; ++i ){
            for (int j = 0; j < columns; ++j){
                char num;
                cin >> num;
                // Convert the char to the integer that represents
                number_of_coins += num - '0';
            }
        
    }
    cout << number_of_coins << endl;
}