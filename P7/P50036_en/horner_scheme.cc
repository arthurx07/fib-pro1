// Let p[0… n] be a vector of integer numbers that contains the coefficients of a polynomial of degree n≥0. For instance, the vector p=⟨3,2,5,−1⟩ 
//  represents p(x)=3+2x+5x2−x3, a polynomial of degree n=3.
// Write a function: that evaluates the polynomial at the point x, that is, that returns ∑(i=0)^n p[i]x^i.
// Use the Horner scheme: pnx^n + pn−1x^n−1 +…+ p0 = ((pnx+pn−1)x+…)x + p0.

#include <vector>
using namespace std;

int evaluate(const vector<int>& P, int x) {
  int ev = 0;
  int si = P.size();
  for (int i = si - 1; i > 0; --i) ev = (ev + P[i])*x;
  return ev += P[0];
}
