// Input: In this problem, given any natural number x with n digits x1 … xn, we say that y = y1 … yn is the result of fattening x if, 
//  for every i between 1 and n, yi = max{x1, …, xi}.
#include <iostream>
using namespace std;

int fatten(int x) {
  if (x < 10) return x;
  else {
    int fattened = fatten(x/10);
    if (fattened%10 > x%10) return fattened*10 + fattened%10;
    else return fattened*10 + x%10;
  }
}
