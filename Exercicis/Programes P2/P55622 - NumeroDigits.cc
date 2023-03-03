#include <iostream>
using namespace std;

int main(){
	
    int n, d=1;
	cin >> n;
	cout << "El nombre de digits de "<< n <<" es ";
	while(n>9){
		n/=10;
		d++;
	}
	cout << d << "." <<endl;
}