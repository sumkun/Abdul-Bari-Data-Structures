#include <iostream>
using namespace std;

struct Area {
  int length;
  int breadth;
};

int main() {
  struct Area A;
  struct Area B = {2, 143};

  A.length = 12;
  A.breadth = 14;

  cout << "Area of Rectangle is: " << A.length * A.breadth << "\n";
  cout << "Area of Rectangle is: " << B.length * B.breadth;
}

// working program. run it in any other online compiler!