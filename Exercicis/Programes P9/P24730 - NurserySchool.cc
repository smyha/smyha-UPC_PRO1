// P24730 - NurserySchool
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Declare the type of struct
struct AwardedPrizes{
    string teacher;
    int candy;
    int carrot;

};
// Function that represent the sort criteria of best teacher's list
bool comp(const AwardedPrizes a, const AwardedPrizes b) {
    if (a.candy > b.candy) {
        return true;
    }
    else if (a.candy < b.candy) {
        return false;
    }
    else {
        if (a.carrot > b.carrot) {
            return true;
        }
        else if (a.carrot < b.carrot) {
            return false;
        }
        else {
            if (a.teacher.size() < b.teacher.size()) return true;
            else if (a.teacher.size() > b.teacher.size()) return false;
            else return a.teacher < b.teacher;
        }
    }
}

int main(){
    int lists;
    cin >> lists;

    for (int i = 0; i < lists;++i){
        int list_size;
        cin >> list_size;
        
        vector<AwardedPrizes> teachers(list_size);
        // Fill the list of the teachers and his awarded prizes
        for (int j = 0; j < list_size; ++j) cin >> teachers[j].teacher >> teachers[j].candy >> teachers[j].carrot;
        // Sort the teachers with the following criteria
        sort(teachers.begin(), teachers.end(), comp);
        // Print the ordenated list of best teachers
        for (int k = 0; k < list_size ; ++k) cout << teachers[k].teacher << endl;
        cout << endl;
    }
}