 #include <iostream>
 using namespace std;

 int main () {

     int x, y, count = 0;
     cin >> x;
     
        while (cin >> y) {
            if ( y%x == 0)
                ++count;
        }

        cout << count << endl;
            
}