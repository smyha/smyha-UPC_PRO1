#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Info {
    string country_name;
    double gini;
};
//pre: quintile_data represents a country income by quintile info
//post: returns the gini coef corresponding to quintile_data   
double gini_coef(const vector<double>& quintile_data) {
    double num = 0;
    
    for (int i = 0; i < 4; ++i){
        for (int j = i + 1; j < 5; ++j){
            num += (quintile_data[j] - quintile_data[i]);
        }
    }
    
    return num/500;
}

vector<Info> load_data (int size){
    vector<Info> info (size);
    for (int i = 0; i < size ; ++i){
        cin >> info[i].country_name;
        
        vector<double> data(5);
        for (int j = 0; j < 5; ++j) cin >> data[j];
        
        info[i].gini = gini_coef(data);
    }
    return info;
}

bool comp (Info& a, Info& b){
    if (a.gini != b.gini) return  a.gini < b.gini;
    return a.country_name < b.country_name;
}

void print_data(const vector<Info>& inf){
    int size = inf.size();
    for (int i = 0; i < size; ++i){
        cout << inf[i].country_name << ' ' << inf[i].gini << endl;
    }
}

int main(){
    // Variables
    int n;
    cin >> n;
    // Set precision
    cout.setf(ios::fixed);
    cout.precision(4);
    // Main code
    vector<Info> info = load_data(n);

    sort(info.begin(),info.end(),comp);

    print_data(info);
}