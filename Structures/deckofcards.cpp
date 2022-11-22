#include <iostream>
using namespace std;

struct deck {
  int color;
  int face;
  int number;
};

int main() {
  struct deck A;
  cout << "Enter the code(0,1) to chose color: \n";
  cin >> A.color;
  switch (A.color) {
  case 0:
    cout << "You have chosed Red \n";
    break;
  case 1:
    cout << "You have chosed Black \n";
    break;
  }

  cout << "Enter the code(0,1,2,3) to chose Face of the card: \n";
  cin >> A.face;
  switch (A.face) {
  case 0:
    cout << "You have chosed Diamond \n";
    break;
  case 1:
    cout << "You have chosed Heart \n";
    break;
  case 2:
    cout << "You have chosed Club \n";
    break;
  case 3:
    cout << "You have chosed Spades \n";
    break;
  }
  cout << "Enter the number of your card: \n";
  cin >> A.number;
  while (A.number > 10) {
    cout << "Entered number is incorrect! Please chose below 10";
    cin >> A.number;
  }

  cout << "Finally you have chosed: \n Your Card is: " << A.number << "of "
       << A.face << "with " << A.color << "color";
}

// code works. Use any other online compiler.