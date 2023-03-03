// P81104 - Students FIPS
#include<iostream>
#include<vector>
using namespace std;
// Precondition: There are not repeated students. In the list of subjects of each student there are not repeated subjects.
struct Subject{
    string name;                // Subject’s name
    double mark;                // Between 0 and 10, -1 shows NP
};

struct Student {
    string name;                // Student’s name
    int dni;                    // Student’s IDN
    vector<Subject> subj;       // Subject list of the student
};

typedef vector<Student> Students;
typedef vector<Subject> Subjects;
// Searches and returns the mark that the student |dni| has obtained at the subject |name|. 
// If the student does not exist, or if he has not done the subject, or his mark is NP, the function must return −1.
double mark (const Students& stu, int dni, string subj){
    bool not_found = true;
    for (int i = 0; i < stu.size() and not_found; ++i){
        if (stu[i].dni == dni){
            for (int j = 0; j < stu[i].subj.size(); ++j){
                if (stu[i].subj[j].name == subj and stu[i].subj[j].mark >= 0){
                    return stu[i].subj[j].mark;
                }
            }
            not_found = false;
        }
    }
    return -1;
}
// calculates and returns the average mark of the subjects in the vector |subj|. 
// To calculate the average mark, NP must be ignored. If all the marks are NP or the vector is empty, the mean mark is −1.
double average(const Subjects& sub){
    int size = sub.size();
    double count = size;
    double avg = 0;
    for (int i = 0; i < size; ++i){
        if (sub[i].mark >= 0){
            avg += sub[i].mark;
        }
        else --count;
    }
    if (count != 0) return avg / count;
    else return -1;
}
// counts and sets in the output parameter |counter| the number of students in the vector |stu| that 
// have a average mark greater than the mark that student |idn| has obtained at the subject |name|.
void count(const Students& stu, int dni, string subj, int& counter){
    for (int i = 0; i < stu.size(); ++i){
        if (average(stu[i].subj) > mark(stu, dni, subj)) ++counter;
    }
    cout << counter << endl;
}

int main(){
    int s;
    cin >> s;
    // Full the vector like a list of students, they idn and subjects with marks.
    Students stu(s);
    Student stud;
    for (int i = 0; i < s; ++i) {
        int subject;
        cin >> stud.name >> stud.dni >> subject;
        
        Subjects subj(subject);
        Subject sub;
        
        for (int j = 0; j < subject; ++j) {
            cin >> sub.name >> sub.mark;
            subj[j] = sub;
        }
        
        stud.subj = subj;
        stu[i] = stud;
    } 
    // Subjects to prove for each student indicated by there identification (dni).
    int idnt;
    string subj;
    while (cin >> idnt >> subj){
        int counter = 0;
        count (stu, idnt, subj, counter);
    }
}