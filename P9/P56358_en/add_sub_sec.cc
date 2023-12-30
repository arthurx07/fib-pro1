// Input: several cases, each with three numbers (hour, minute and second) that form a correct time. That is, the hour is between 0 and 23, and the minute and
//  the second are between 0 and 59.
// Output: For every given time t, print two lines with t1 and t2.
// Observation: You can implement auxiliary procedures. Use struct Time and void one_second

#include <iostream>
using namespace std;

struct Time {
  int hour, minute, second;
};

// post: convert time in seconds to h m s format
Time check_time(int time) {
  Time t;

  time += 24*60*60; // for negative times
  time %= 24*60*60; // consequently: case time is 24 0 0, or for invalidating the sum previously made, for positive times.

  t.second = time%60; // seconds remaining
  t.minute = (time/60)%60; // 60s, one minute
  t.hour = time/3600; // 60*60, one hour

  return t;
}

// post: leaves in t1 the time in t plus one second. leaves in t2 the time in t minus one second. 00 00 00 <= t <= 23 59 59
void one_second(const Time& t, Time& t1, Time& t2) {
  int seconds = t.second + (t.minute + t.hour*60)*60;
  t1 = check_time(seconds + 1);
  t2 = check_time(seconds - 1);
}

int main() {
  Time t;
  while (cin >> t.hour >> t.minute >> t.second) {
    Time t1, t2;

    one_second(t, t1, t2);

    cout << t1.hour << ' ' << t1.minute << ' ' << t1.second << endl;
    cout << t2.hour << ' ' << t2.minute << ' ' << t2.second << endl;
  }
}

// this solution was inspired...
