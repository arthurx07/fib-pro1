// Input: The input has several cases. Each one starts with two positive natural numbers n, k on a first line. Next, n lines come, each describing the 
//  position (three integers), velocity (three integers) and mass (a positive natural) of a particle. Finally, k lines come, each with a positive natural
//  that represents an elapsed time.

// Output: for each case k lines must be printed. Where the i'th line contains the mass center (three reals rounded to 5 digits after the decimal point) of all
//  the particles after the sum of the first i elapsed times. Secondly, n lines must be printed, with the positions (three reals rounded to 5 digits after 
//  the decimal point) of the particles after the sum of all the elapsed times. Each case is followed by a blank line.)

// Obs: struct Particle, Point and procedures sum, mul, printDouble are defined by the statement.

#include <iostream>
#include <vector>
#include <algorithm> // for abs()
using namespace std;

struct Point {
  double x, y, z;
};

struct Particle {
  Point p, v;
  double m;
};

// Post: returns the sum of p1 and p2.
Point sum(Point p1, Point p2) {
  Point s;
  s.x = p1.x + p2.x;
  s.y = p1.y + p2.y;
  s.z = p1.z + p2.z;
  return s;
}

// Post: returns a times p.
Point mul(double a, Point p) {
  Point m;
  m.x = a*p.x;
  m.y = a*p.y;
  m.z = a*p.z;
  return m;
}

// Post: returns the division of p by a.
Point div(Point p, double a) {
  Point d;
  d.x = p.x/a;
  d.y = p.y/a;
  d.z = p.z/a;
  return d;
}

void printDouble(double d) { // Procedure to print real numbers on the output
  if (abs(d) < 1e-7)
    cout << 0.0;
  else
    cout << d;
}
 
int main() {
  // instructions needed due to format and efficiency issues of cin and cout managing real numbers
  // Use cout << '\n'; to print break lines
  ios::sync_with_stdio(false);
  cin.tie(0);    
  cout.setf(ios::fixed);
  cout.precision(5);
  
  int n, k;
  while (cin >> n >> k) {
    vector<Particle> ptcls(n); // particles vector
    Point cpos = {}; // reset cpos to zero + initialize
    Point cvel = {};
    double cmass = 0;

    for (int i = 0; i < n; ++i) { // input + calc mass center
      cin >> ptcls[i].p.x >> ptcls[i].p.y >> ptcls[i].p.z;
      cin >> ptcls[i].v.x >> ptcls[i].v.y >> ptcls[i].v.z;
      cin >> ptcls[i].m;

      // (x,y,z) = (cmass*cpos + m[i]*p[i])/(cmass + m[i])
      cpos = div(sum(mul(cmass, cpos), mul(ptcls[i].m, ptcls[i].p)), cmass + ptcls[i].m);
      cvel = div(sum(mul(cmass, cvel), mul(ptcls[i].m, ptcls[i].v)), cmass + ptcls[i].m);
      cmass += ptcls[i].m;
    }

    int tsum = 0;
    for (int i = 0; i < k; ++i) { // calc pos at t + output
      int t;
      cin >> t;
      tsum += t;

      // (x,y,z) = (xo,yo,zo) + (vx, vy, vz)*t
      cpos = sum(cpos, mul(t, cvel));

      printDouble(cpos.x);
      cout << ' ';
      printDouble(cpos.y);
      cout << ' ';
      printDouble(cpos.z);
      cout << '\n';
    }

    for (int i = 0; i < n; ++i) { // calc pos at tsum + output
      Point cposp = {};
      cposp = sum(ptcls[i].p, mul(tsum, ptcls[i].v));

      printDouble(cposp.x);
      cout << ' ';
      printDouble(cposp.y);
      cout << ' ';
      printDouble(cposp.z);
      cout << '\n';
    }
  cout << '\n';
  }
}
