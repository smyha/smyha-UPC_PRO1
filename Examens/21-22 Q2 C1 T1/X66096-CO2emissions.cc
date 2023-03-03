#include<iostream>
using namespace std;

int main(){
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    int year;
    double amount_of_gas;
    string activity;

    cin >> year >> amount_of_gas >> activity;

    if (activity == "making_things"){
        amount_of_gas = (amount_of_gas/100) * 31;
        activity = "Making things";
    } 
    else if (activity == "pluggin_in"){
        amount_of_gas = (amount_of_gas/100) * 27;
        activity = "Pluggin in";
    }
    else if (activity == "growing_things") {
        amount_of_gas = (amount_of_gas/100) * 19;
        activity = "Growing things";
    }
    else if (activity == "getting_around"){
        amount_of_gas = (amount_of_gas/100) * 16;
        activity = "Getting around";
    } 
    else {
        amount_of_gas = (amount_of_gas/100) * 7;
        activity = "Keeping warm and cold";
    }
    cout << activity << " produced " << amount_of_gas << " CO2 Gt in " << year << endl;
}