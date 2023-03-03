// P84786 - Circles(1)
#include <iostream>
using namespace std;

struct Point {
    double x, y;
};

struct Circle {
    Point center;
    double radius;
};

double dist(const Point& a, const Point& b){
  return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

bool is_inside(const Point& p, const Circle& c){

}

void move(Point& p1, const Point& p2){


}

void scale(Circle& c, double sca){

}

int main(){

}