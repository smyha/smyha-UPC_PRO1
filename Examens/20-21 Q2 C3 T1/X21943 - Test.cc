#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Student {
    string name;
    int right = 0;
    int wrong = 0;
};

vector<int> read_right_answers(int size){
    vector<int> answers (size);
    for (int i = 0; i < size; ++i){
        cin >> answers[i];
    }
    return answers;
}

vector<Student> get_info_test(const vector<int>& answ, int students){
    int answers = answ.size();
    vector<Student> test (students);
    
    for (int i = 0; i < students; ++i){
        cin >> test[i].name;
        
        for (int j = 0; j < answers; ++j){
            int answer;
            cin >> answer;

            if (answer == answ[j]) ++test[i].right;
            else if (answer > 0) ++test[i].wrong;
        }
    }
    return test;

}

bool cmp (Student&a, Student&b){
    int Apoints = 2*a.right - a.wrong, Bpoints = 2*b.right - b.wrong;
    if (Apoints == Bpoints){
        if (a.wrong == b.wrong){
            return a.name < b.name;
        }
        return a.wrong < b.wrong;
    }
    return Apoints > Bpoints;
    
}

void write_results(const vector<Student>& v){
    int size = v.size();
    for (int i = 0; i < size; ++i){
        cout << v[i].name << ' ' << v[i].right << ' ' << v[i].wrong << endl;
    } 
}

int main() {
    int m;
    cin >> m;
    vector<int> answer = read_right_answers(m);
    
    int n;
    cin >> n;
    vector<Student> v = get_info_test(answer, n);
    
    sort(v.begin(), v.end(), cmp);
    
    write_results(v);
}