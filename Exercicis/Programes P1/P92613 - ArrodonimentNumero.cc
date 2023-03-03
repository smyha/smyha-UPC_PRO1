# include <iostream>
using namespace std;

int main (){
    
    double x;
	cin >> x; //x >= 0
	
	int y = x;
	//part entera inferior
	cout << y << ' ';
	
	//part entera superior
	if (x - y != 0) cout << y + 1 << ' ';
	else cout << y << ' ';
	
	//arrodoniment
	if (x - y >= 0.5) cout << y + 1 << endl;
	else cout << y << endl;
}