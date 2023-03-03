#include <iostream>

using namespace std;

int main () {

	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;
	
	if (b1 < a2 or b2 < a1) cout << "[]" << endl;
	else if (a1 >= a2 and b1 > b2) // a1, b2
		cout << '[' << a1 << ',' << b2 << ']' << endl;
	else if (a1 >= a2 and b1 <= b2) //a1, b1
		cout << '[' << a1 << ',' << b1 << ']' << endl;
	else if (a1 < a2 and b1 <= b2) //a2, b1
		cout << '[' << a2 << ',' << b1 << ']' << endl;
	else //if (a1 < a2 and b1 > b2) //a2, b2
		cout << '[' << a2 << ',' << b2 << ']' << endl;
}

/* #include <iostream>
using namespace std;

int main(){
    int a1,a2,b1,b2;
    cin >> a1 >> a2 >> b1 >> b2;

    cout << "[";
    if (a2<b1 or b2<a1){
        cout << "]" << endl;
    }
    else {
        if (a1>=b1){
        cout << a1 << ",";
        }
    else {
        cout << b1 << ",";
        }

        if (b2>=a2){
        cout << a2;
        } else {
        cout << b2;
    }
     cout << "]" << endl;
    }
}
*/

