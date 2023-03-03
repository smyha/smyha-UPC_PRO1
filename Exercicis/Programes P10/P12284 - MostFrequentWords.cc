// P12284 - MostFrequentWords
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


struct Info{
    string word;
    int freq;
};

typedef vector<Info> Infor;

Infor load_info (int size){
    Infor data(size);
    for (int i = 0; i < size; ++i){
        cin >> data[i].word;
        data[i].freq = 1;
    }
    return data;
}

bool order1 (const Info& a, const Info&b){
    return a.word < b.word;
}
 
bool order2 (const Info& a, const Info&b){
    if (a.freq != b.freq) return a.freq > b.freq;
    return a.word < b.word;
}

void count_info (Infor& inf, int size){
    for (int j = 1; j < size; ++j){
        if (inf[j-1].word == inf[j].word){
            inf[j].freq += inf[j-1].freq;
            inf[j-1].freq = 0;
        }
    }
}

void print_info (const Infor& info, int p){
    int i = 0;
    while (i < p){
        cout << info[i].word << endl;
        ++i;
    }
    cout << "----------" << endl;
}

int main(){
    int n, p;
    while (cin >> n >> p){
        Infor inf = load_info(n);
        
        sort(inf.begin(), inf.end(), order1);
        count_info(inf, n);
        sort(inf.begin(), inf.end(), order2);

        print_info (inf, p);
    }
}