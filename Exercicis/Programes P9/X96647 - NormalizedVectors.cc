// X96647 - Normalized Vectors
#include<iostream>
#include<vector>
using namespace std;

struct Point {
    double x, y;
};

bool checkfirst (const vector <Point> &v) {

    Point compare;
    compare.x = v[0].x;
    compare.y = v[0].y;

    int n = v.size();
    for (int i = 1; i < n; ++i) {
        if (v[i].x != compare.x or v[i].y != compare.y) return true;
    }

    return false;
}

bool barycenter (const vector<Point>& v, Point& b){
    // Obtain the baricenter of the vector and print it.
    double amountx = 0;
    double amounty = 0;
    for (int i = 0; i < v.size(); ++i){
        amountx += v[i].x;
        amounty += v[i].y;
    }
    b.x = amountx/(v.size());
    b.y = amounty/(v.size());              
    cout << "barycenter: (" << b.x << ',' << b.y << ')' << endl;
    // Property 1: The vector contains at least two different elements.
    if (not checkfirst(v)) {
        cout << "property 1 does not hold" << endl;
        return false;
    }
    // Property 2: The sum of all the x-coordinates of the points in the vector equals the sum of all the y-coordinates of the points in the vector.
    if (amountx != amounty){
        cout << "property 2 does not hold" << endl;
        return false;
    }
    // Property 3: The barycenter of the points in the vector does not belong to the vector.
    for (int i = 0; i < v.size(); ++i){
        if (v[i].x == b.x and v[i].y == b.y){
            cout << "property 3 does not hold" << endl;
            return false;
        }
    }
    return true;
}

int main(){
    int npairs;
    
    while (cin >> npairs){
        // Full a vector with the pair vectors
        vector<Point> v (npairs);
        for (int i = 0; i < npairs; ++i){
            cin >> v[i].x >> v[i].y;
        }
        // Set precision
        cout.setf(ios::fixed);
        cout.precision(2);
        // Determine if it's a normalized vector
        Point b;
        if (barycenter(v, b)) cout << "normalized vector" << endl;
    }
}