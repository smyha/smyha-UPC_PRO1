// P46254 - DistanceBetweenTwoPoints
#include<iostream>
#include<cmath>
using namespace std;
// Define struct Point variable before main function
struct Point {
    double x, y;
};
// Calcule the euclidian distance between the point A and the point B : https://bit.ly/3jFEKlM
double dist(const Point& a, const Point& b){
    return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
}
int main(){
    // Set precision
    cout.setf(ios::fixed);
    cout.precision(6);
    double x1, x2, y1, y2;
    while (cin >> x1 >> x2 >> y1 >> y2){
        Point a, b;
        a.x = x1;
        a.y = y1;
        b.x = x2;
        b.y = y2;
        cout << dist(a, b);
    }

    
}