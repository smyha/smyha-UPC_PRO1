// X58174 - AnotacionsConsolidades
#include<iostream>
using namespace std;

int consolidation_score (int scores){
    int counter = 0;
    int pre2, pre1, current;
    cin >> pre2 >> pre1;
    for (int i = 0; i < scores - 2; ++i){
        cin >> current;
        if (current > pre2 and current > pre1) ++counter;
        pre2 = pre1;
        pre1 = current;
    }
    return counter;
}
int main(){
    int number_scores;
    cin >> number_scores;

    int score = 0, max_score = -1;
    string team, winner_team = "a";
    
    while (cin >> team){
        score = consolidation_score(number_scores);
        cout << team << ": " << score << endl;       
        if (score > max_score or (score == max_score and team < winner_team)){
            max_score = score;
            winner_team = team;
        }
    }
    cout << "----------" << endl;
    if (winner_team != "a") cout << winner_team << ": " << max_score << endl;
    else cout << "no hay equipos" << endl;
}