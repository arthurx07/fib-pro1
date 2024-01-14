// Write a program that solves word searches! Words can be written horizontally (from left to right), vertically (from top to bottom) or diagonally
//  (from left to right and from top to bottom).
// Input: Input consists in different test data. Each test data contains three parts: the first part contains three natural numbers x, m and n not null.
//  The second part is a sequence of x words. The third part is a matrix with m rows and n columns that represents the word search. Every symbol that
//  appears in the words and in the word search are lowercase letters a,…,z.
// Output: For each test data print the matrix of the input, changing the letters which form part of any word to uppercase letters. Separate each letter
//  of the word search by a space; separate each test data by an empty line.

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

int main() {
  int x, m, n;
  while (cin >> x >> m >> n) {
    vector<string> words(x);
    for (int i = 0; i < x; ++i) cin >> words[i];

    Matrix ws(n, m)
  }
}
