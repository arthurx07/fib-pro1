// Input: Deixa en el paràmetre de sortida maxim el dígit més gran de n, i deixi en el paràmetre de sortida minim el dígit més petit de n.
#include <iostream>
using namespace std;

void digit_maxim_i_minim(int n, int& maxim, int& minim) {
  if (n < 10) maxim = minim = n;
  else {
    digit_maxim_i_minim(n/10, maxim, minim);
    if (n%10 > maxim) maxim = n%10;
    else if (n%10 < minim) minim = n%10;
  }
}
