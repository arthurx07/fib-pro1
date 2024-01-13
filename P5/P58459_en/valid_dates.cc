#include <iostream>
using namespace std;

bool is_leap(int y) {
  return ((y%4 == 0 and y%100 != 0) or ((y/100)%4 == 0 and y%100 == 0));
}

bool is_valid_date(int d, int m, int y) {
  bool correct = true;
  if (m == 2 and ((not is_leap(y) and d == 29) or d > 29)) correct = false;
  else if ((m == 4 or m == 6 or m == 9 or m == 11) and d > 30) correct = false;
  else if (d > 31 or m > 12 or d <= 0 or m <= 0) correct = false;
  return correct;
};
