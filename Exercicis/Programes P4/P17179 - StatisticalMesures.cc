#include<iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    
    cout.setf(ios::fixed);
    cout.precision(4);

    for (int j = 0; j < number; ++j){
        
        double mumber, maximum, average;
        double minimum = 0;
        cin >> mumber >> maximum;
        
        minimum = maximum;
        average = minimum;
        
        for (int sequence = 1; sequence < mumber; ++sequence){
            double n_sequence;
            cin >> n_sequence;

            if (maximum < n_sequence) maximum = n_sequence;
            else if (minimum > n_sequence) minimum = n_sequence;
            average += n_sequence;
    
        }
        cout << minimum << ' ' << maximum << ' ' << average/mumber << endl;
    }
}