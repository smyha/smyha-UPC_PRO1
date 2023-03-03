# include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    for(int i = 0; i <= n; ++i){ // Utilitzem el bucle "for" per que coneixem el recorregut
        cout << i << endl;
    }
}
/*  De la mateixa forma pero al reves:

# include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    for(int i = n; i >= 0; --i){
        cout << i << endl;
    }
}

*/