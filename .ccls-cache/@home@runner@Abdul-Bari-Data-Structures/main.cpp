#include <iostream>
using namespace std;

int main() {
  int A[5];  //declaration
  int B[5] = {1,2,3,4,5};  //declaration + initialization

  for(int i = 0; i<5; i++){
    cout<< B[i] << "\n";
  }
}