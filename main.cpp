#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

//objective: input all prime numbers up to n into a file. Use nested loops (for or while). 

int main() {
  //declare variables
  int n, i, j, check;
  ofstream file1("primeNums.txt");
  
  //input n
  cout << "enter n: ";
  cin >> n;
    
  //output first prime numbers to file
  file1 << 1 << endl << 2 << endl;

  //initialize variable
  check = 0;
  
  //loop to generate odd numbers from 3 to n to then divide j by i to determine if j is prime
  for (j=3;j<=n;j+=2) {
    //starting values for each time the for loop iterates
    i = 3;
    
    cout << "entered for loop"<<endl;
    cout << j <<endl;
    
    //while loop that returns the modulos of j%i and makes a check variable turn to 1 if j is not prime
    while (check == 0 && i<=j-1) {
      cout << "entered while loop"<<endl;
      cout << i << endl;
      
      if (j%i == 0) {
        check = 1;
      } 
      i += 2;
    } 
    //if statement that adds j to an array if check is still 0 (meaning j is prime)
    if (check == 0) {
      file1 << j << endl;
    }
    //reset check to 0
    check = 0;
  }

  //close file
  file1.close();
  
  return 0;
}
 
