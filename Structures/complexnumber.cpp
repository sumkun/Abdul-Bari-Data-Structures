#include <iostream>
using namespace std;

struct Complexno { // complex no = A+iB (where i is imaginary)
  int real1;
  int real2;
  int imaginary;
};
int main() {
  struct Complexno C;
  cout << "Enter the real number A: \n";
  cin >> C.real1;
  cout << "Enter the real number B: \n";
  cin >> C.real2;
  cout << "Enter the imaginary number i: \n";
  cin >> C.imaginary;

  cout << "The Complex Number for the given input is: "
       << C.real1 + (C.imaginary * C.real2);
}

// the program works. Use any other online compiler to run it!