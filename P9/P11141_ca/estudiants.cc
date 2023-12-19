#include <iostream>
#include <vector>
using namespace std;

struct Estudiant {
  int dni;
  string nom;
  double nota;
  bool repetidor;
};

void informacio(const vector<Estudiant>& es, double& min, double& max, double& mitj) {
  min = 10;
  max = mitj = 0; // we do not know its value, initialize at 0.
  int size = es.size();
  int ne = 0;
  for (int i = 0; i < size; ++i) {
    if (not es[i].repetidor and es[i].nota != -1) {
      ++ne;
      if (es[i].nota < min) min = es[i].nota;
      if (es[i].nota > max) max = es[i].nota;
      mitj += es[i].nota;
    }
  }
  if (ne > 0) mitj = mitj/ne;
  else min = max = mitj = -1;
}
