// X69939 - Metronome
#include<iostream>
using namespace std;

int time_lapse(int time_1, int time_2){
    if (time_2 < time_1) time_2 += 60;
    if (time_2 == time_1) return 60;
    return time_2 - time_1;
}

int main(){
    int preTime, nextTime;
    bool correct = true;
    bool first = true;
    cin >> preTime >> nextTime;
    
    int metronome = 0;
    while (correct and nextTime != -1){
        int prove_clock = time_lapse(preTime, nextTime);
        if (not first and metronome != prove_clock) correct = false;
        metronome = prove_clock;
        preTime = nextTime;
        cin >> nextTime;
        first = false;
    }
    if (correct) cout << metronome << endl;
    else cout << 0 << endl;
}