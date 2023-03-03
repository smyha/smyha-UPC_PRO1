// P15714 - P0013. Words between dashes
#include<iostream>
using namespace std;

void operate_type(int& counter_words, int& shortW, int& mediumW, int& longW){
    if (counter_words != 0){
        if (counter_words < 5) ++shortW;
        else if (counter_words <= 9) ++mediumW;
        else ++longW;
        counter_words = 0;
    }
}

int main(){
    // Type
    char c;
    cin >> c;
    // Variables
    int counter_words = 0;
    int shortW = 0;
    int mediumW = 0;
    int longW = 0;
    // Read Loop
    while (c != '.'){
        if (c != '-') ++counter_words;
        // If there are a blank space after word, operate
        else{
            operate_type(counter_words, shortW, mediumW, longW);
        }
        cin >> c;
    }
    // Prove when phrase ended without a dash (-).
    operate_type(counter_words, shortW, mediumW, longW);
    // Print the result
    cout << shortW << ',' << mediumW << ',' << longW << endl;
}