// P67340 - ThreateningBishops
#include <iostream>
#include <vector>
using namespace std;

typedef vector <vector<char> >Board;																// Define the synonyms for the use of Matrix Board

void find_threats_position(const Board& board, int r1, int c1, int x, int y, int n, int m) {
	int i = r1+x;
	int j = c1+y;

	bool found = false;																				// Only can threat one bishop by diagonal
	while (not found and i < n and i >= 0 and j < m and j >= 0) {
		if (board[i][j] == 'X') {
			cout << '(' << r1+1 << ',' << c1+1 << ")<->(" << i+1 << ',' << j+1 << ')' << endl;
			found = true;
		}
		i += x;
		j += y;
	}
}

int main() {
	int n, m;
	cin >> n >> m;

	Board board (n,vector<char> (m));

	for (int i = 0; i < n; ++i) {																	// Fill the chess board with random bishops
		for (int j = 0; j < m; ++j) {
			cin >> board[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (board[i][j] == 'X') {
				find_threats_position(board, i, j, 1, 1, n, m);  									// downward to the right
				find_threats_position(board, i, j, 1, -1, n, m);  									// downward to the left
				find_threats_position(board, i, j, -1, 1, n, m);  									// upward to the right
				find_threats_position(board, i, j, -1, -1, n, m);  									// upward to the left
			}
		}
	}
}