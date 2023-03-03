// X13635 - MediaLibrary(II)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Track {
  string artist, title, genre;
  int year;
};

vector<Track> read_Track(int n) {
    vector<Track> data(n);
    for (int i = 0; i < n; ++i){
        cin >> data[i].artist >> data[i].title >> data[i].genre >> data[i].year;
    }
    return data;
}

bool comp (Track&a, Track&b){
    if (a.artist != b.artist) return a.artist < b.artist;
    if (a.year != b.year) return a.year < b.year;
    return a.title < b.title;
}

void print_track(const Track &t) {
    cout << t.artist << " (" << t.year << ") " << t.title << " (" << t.genre << ")" << endl;
}

int main() {
    int nTrack;
    cin >> nTrack;

    vector<Track> track = read_Track(nTrack);
    sort (track.begin(),track.end(),comp);

    string music_genre;
    while (cin >> music_genre){
        for (int i = 0; i < nTrack; ++i){
            if (track[i].genre == music_genre) print_track(track[i]);
        }
    }
}