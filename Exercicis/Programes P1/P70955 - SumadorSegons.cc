# include <iostream> 
using namespace std;

int main (){
    
    int year, days, hours, minutes, seconds;
    cin >> year >> days >> hours >> minutes >> seconds;

    int total = seconds;
    
    total += year*365*24*3600;
    total += days*24*3600;
    total += hours*3600;
    total += minutes*60;
    

    cout << total << endl;
}
