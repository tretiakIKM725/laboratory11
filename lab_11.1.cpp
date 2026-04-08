#include <iostream>
using namespace std;

int main () {
  int a, b;

  cout << "Enter a and b : ";
  cin >> a >> b;

  int *ptrA = &a;
  int *ptrB = &b;

  *ptrA *= 3;
  *ptrB /= 3;

  cout << "Result : \na = " << a << ";\tb = " << b << endl;
  
  return 0;
}
