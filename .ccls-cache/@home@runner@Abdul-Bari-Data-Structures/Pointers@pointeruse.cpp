#include <iostream>
using namespace std;

int main() {
  int *p; // address variable p i.e pointer

  // let's initialize memory into the heap and point it via pointer
  // we can access heap memory by "new" in c++ and by "malloc" in C

  // p = (int *)malloc(5*sizeof(int));  C way

  p = new int[5]; // c++ way

  cout << p;
}