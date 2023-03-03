// P45616 - Clock
#include<iostream> 
using namespace std;
// Define struct Point variable before main function
struct Clock {
    int h;      // hours (0 <= h< 24)
    int m;      // minutes (0 <= m <60)
    int s;      // seconds (0 <= s <60)
};
// Restart the clock counter (This function becomes inefficient for this type of problem.)
Clock midnight(){
    Clock ini;
    ini.h = 0;
    ini.m = 0;
    ini.s = 0;
    return ini;
}
// Increase one second the clock r
void increase(Clock& r){
    ++r.s;
    if (r.s == 60){
        r.s = 0;
        ++r.m;
        if (r.m == 60){
            r.m = 0;
            ++r.h;
            if (r.h == 24) r = midnight();
        }
    }
}
// Print what time is it.
void print(const Clock& r){
    // Print hour
    if(r.h < 10) cout << '0';
    cout << r.h << ':';
    // Print min
    if(r.m < 10) cout << '0';
    cout << r.m << ':';
    // Print sec
    if(r.s < 10) cout << '0';
    cout << r.s << endl;
}

int main(){
    Clock r;
    cin >> r.h >> r.m >> r.s;
    increase(r);
    print(r);
}