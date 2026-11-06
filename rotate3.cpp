#include <iostream>
using namespace std;

void rotate3P(int *a, int *b, int *c) {
  int temp = *a;
  *a = *b;
  *b = *c;
  *c = temp;
  cout << "After rotaion inside rotate3P function, a=" << a << ", b=" << b
       << ",c=" << c << ".\n";
}

void rotate3R(int &a, int &b, int &c) {
  int temp = a;
  a = b;
  b = c;
  c = temp;
  cout << "After rotaion inside rotate3R function, a=" << a << ", b=" << b
       << ",c=" << c << ".\n";
}

int main() {
  int a = 10, b = 20, c = 30;
  cout << "Initially : a=" << a << ", b=" << b << ", c=" << c << ".\n";
  cout << "Now using reference : \n";
  rotate3R(a, b, c);
  cout << "After using reference swap, a=" << a << ", b=" << b << ",c=" << c
       << ".\n";
  cout << "Now using pointer swap : \n";
  rotate3P(&a, &b, &c);
  cout << "After using pointer swap, a=" << a << ", b=" << b << ",c=" << c
       << ".\n";
  return 0;
}