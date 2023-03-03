// P92844 - BoudingRectangles.cc
#include<iostream>
#include<vector>
using namespace std;
// Define the synonyms for the use of Matrix
typedef vector<char> Row;
typedef vector<Row> Rectangle;
//Precondition: The character c occurs at least once in r, which is really a rectangle. That is, all rows have the same number of characters.
// Postcondition: Computes the number of rows rows and the number of columns cols of the smallest subrectangle with horizontal and vertical sides that contains all the occurrences of c in r.
void minimal_dimensions(char c, const Rectangle& r, int& rows, int& cols){
    int row = r.size();
    int col = r[0].size();
    int i = 0;
    int j = 0;
    bool found = false;
    while (not found and i < row){
        while (not found and j < cols){
            if (r[i][j] == c) ++rows;
            ++i;
        }
        if (r[i][j] == c) ++cols;
        ++j;
    }
}

int main(){
    int n, m;
    while (cin >> n >> m){
        Rectangle r (n, vector<char>(m));
        // Read the rectangle
        for (int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                cin >> r[i][j];
            }
        }
        char c;
        int rows = 0, columns = 0;
        cin >> c;
        // Search the subrectangle that cointains c.
        minimal_dimensions(c, r, rows, columns);
        cout << rows << ' ' << columns;

    }
}