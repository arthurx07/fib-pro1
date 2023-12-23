// The scalar product of two vectors u=(u0,…,un−1) and v=(v0,…,vn−1) is ∑(i=0)^n−1 ui vi.
// Pre: The vectors u and v have the same size.

#include <vector>
using namespace std;

double scalar_product(const vector<double>& u, const vector<double>& v) {
  int s = u.size(); // u and v have the same size
  double sprod = 0;
  for (int i = 0; i < s; ++i) sprod += u[i]*v[i];
  return sprod;
}
