// A media library is a program used to organise digital audio on a personal computer. Among many other functions, the user can access the
//  attributes of a song, such as: artist, title, genre and year. You have to make a program supporting queries to the media library.
// In particular, once the data available on the library has been read by your program, a genre (e.g., Rock) can be introduced to retrieve all
//  the songs belonging to this genre, listed by artist, year and title order.
// Input: The input consists of a number n ≥ 0 followed by n songs, each of which consists of three strings (artist, title and genre) and
//  an integer (year). This is followed by a sequence of strings (genres).
// Output: For each genre in the input, print all the songs of that genre sorted by artist and, within artist, by year, and then by title.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Track {
  string artist, title, genre;
  int year;
};

vector<Track> read_tracks(int n) {
  vector<Track> t(n);
  for (int i = 0; i < n; ++i) {
    cin >> t[i].artist >> t[i].title >> t[i].genre >> t[i].year;
  }
  return t;
}

bool cmp(const Track& a, const Track& b) {
  if (a.artist == b.artist) {
    if (a.year == b.year) return a.title < b.title;
    else return a.year < b.year;
  } else return a.artist < b.artist;
}

void print_track(const Track& t) {
  cout << t.artist;
  cout << " (" << t.year;
  cout << ") " << t.title << " (" << t.genre << ")" << endl;
}

int main() {
  int n;
  cin >> n;
  vector<Track> tracks = read_tracks(n);

  sort(tracks.begin(), tracks.end(), cmp);

  string genre;
  while (cin >> genre) { // for (string genre; cin >> genre;)
    for (int i = 0; i < n; ++i) {
      if (tracks[i].genre == genre) print_track(tracks[i]);
    }
  }
}
