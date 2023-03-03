#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct repeticions {
	int rep; 
	int nlletres; 
};

void store(vector<repeticions>& L, int reps, int nl) {
	repeticions r;
	r.rep = reps;
	r.nlletres = nl;
	L.push_back(r);
	int i = 0;
	while (L[i].rep != reps) ++i;
	if (i != L.size() -1) {
		L[i].nlletres += nl;
		L.pop_back(); 
	}
}

bool comp(const repeticions& w1, const repeticions& w2) {
	return w1.rep < w2.rep;
}

int main() {

	int n;
	while(cin >> n) {

		vector<string> words(n);	
		for (int i = 0; i < n; ++i) {
			cin >> words[i];
		}
		
		sort(words.begin(), words.end());

		vector<repeticions> counts;

		int c = 1;
		for (int i = 1; i <words.size(); ++i) {
			if (words[i] == words[i-1]) ++c;
			else {
				store(counts, c, words[i-1].length());
				c = 1;
			}
		}
		store(counts, c, words[words.size()-1].length());

		sort(counts.begin(), counts.end(), comp);

		for (int i = 0; i < counts.size(); ++i) cout << counts[i].rep << " : " << counts[i].nlletres << endl;
		cout << endl;
	}
}