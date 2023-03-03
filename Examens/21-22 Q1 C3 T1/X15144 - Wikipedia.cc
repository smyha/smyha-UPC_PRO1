// Wikipedia
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Article {
    string identifier;
    string topic;
    int freq;
};
//pre: n > 0
//post: returns article vector formed by input channel data
vector<Article> initialize_art_vector(int n) {
    vector<Article> data (n);
    for (int i = 0; i < n; ++i){
        cin >> data[i].identifier >> data[i].topic;
        data[i].freq = 0;
    }
    return data;
}

bool comp (const Article&a, const Article&b){
    if (a.topic != b.topic) return a.topic < b.topic;
    if (a.freq != b.freq) return a.freq > b.freq;
    return a.identifier < b.identifier;
}

void update_freq (vector<Article>& v, string identity){
    // Found the position of the identify inside the Article vector: With dicotomic reseaech (ordenated)
    int i = 0;                                              // Left position
    int j = v.size() - 1;                                   // Right position
    while (v[i].identifier != identity){
        int mid = (i + j)/ 2;                                 // Mid position
        if (v[mid].identifier < identity) i = mid + 1;
        else j = mid;    
    }
    ++v[i].freq;
}
//pre: v is non-empty
//post: write vector on output
void write_art_vector(const vector<Article>&v) {
    int size = v.size();
    for (int i = 0; i < size; ++i){
        cout << v[i].topic << ' ' << v[i].freq << ' ' << v[i].identifier << endl;
    }
}


int main() {
    int n;
    cin >> n;
    vector<Article> v = initialize_art_vector(n);
    
    string consult;
    while (cin >> consult){
        update_freq(v,consult);
    }
    sort (v.begin(), v.end(), comp);
    write_art_vector(v);
}

// arts 4 mona_lisa
// arts 2 las_meninas
// history 2 trafalgar_battle
// history 2 waterloo_battle
// history 1 napoleon_bonaparte
// maths 1 pythagoras_theorem
// maths 0 fermat_last_theorem
// science 3 uncertainty_principle
// science 2 penicillim_discovery
// science 1 quantum_mechanics