#include <iostream>
#include <fstream>
using namespace std;

//objective: input all prime numbers up to n into a file

int main() {
  //declare variables
  int n, i, j;
  //input n
  cout << "enter n: ";
  cin >> n;
  double a[n];

  //loop to check if numbers are prime and store in array if so
  for (i=1;i<n;i++) {
    for (j=1;j<n;j++) {
      if (i%j != 0) {
        a[i] = i;
        cout << a[i] << endl;
      }
    }
  }

  cout << a;

  //output numbers to file
  ofstream file1('output.txt');
    
  


  
}