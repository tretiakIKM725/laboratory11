#include <iostream>
using namespace std;

int main () {

  int n = 4;
  int m = 8;

  int *x = new int[n];
  int *y = new int[m];


  cout << "Enter " << n << " elements for array x : " << endl;
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  cout << "Enter " << m << " elements for array y : " << endl;
  for (int i = 0; i < m; i++) {
    cin >> y[i];
  }

  int count = 0;
  for (int i = 0; i < m; i++){
    if (y[i] == x[3]) { 
      count++;
    }
  }

  cout << "4th element of array X is: " << x[3] << endl;
  cout << "It repeats " << count << " times in arrsy Y" << endl;

  delete[] x;
  delete[] y;

  return 0;

}






