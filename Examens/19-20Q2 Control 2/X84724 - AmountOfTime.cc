// X824724 - AmountOfTime (with vectors)
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int length;
    cin >> length;

    vector <int> time (3,0);
    int hour, minute, second;
    char points;
    for (int i = 0; i < length; ++i){
        cin >> hour >> points >> minute >> points >> second;
        time[0] += hour;                                                    // Time 0: updapte HOURS
        time[1] += minute;                                                  // Time 1: updapte MINUTES
        time[2] += second;                                                  // Time 2: updapte SECONDS
    }
    if (time[2] >= 60){                                                     // If the time delay is exceeded, perform the following actions
        time[1] += time[2]/60;
        time[2] = time[2]%60;
    }
    if (time[1] >= 60){
        time[0] += time[1]/60;
        time[1] = time[1]%60;
    }
    cout << time[0] << "H " << time[1] << "M " << time[2] << 'S' << endl;
}