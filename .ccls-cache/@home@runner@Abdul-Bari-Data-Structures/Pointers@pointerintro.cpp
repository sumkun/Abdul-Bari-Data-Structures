#include <iostream>
using namespace std;

int main() {
  int a = 10; // data variable which holds the actual data
  int *p;     // address variable which holds the address of another variable
              // (points to other variable)

  // pointers are used to access the heap memory directly
  // pointers are used for parameter passing
  // pointers are used for accessing other resources

  p = &a; // will hold the address of data variable a

  cout << "Pointer variable value: " << p << "\n";
  cout << "Pointer variable: " << *p << "\n";
  cout << "Pointer address value: " << &p << "\n";
}