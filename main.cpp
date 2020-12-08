//Recursion is incrementation of smaller instances of a bigger equation. It is sort of a count down from any number.
//The goal of the Tower of Hanoi is to properly stack the disks in the smallest amount of moves possible. The equation of the Tower of Hanoi is 2^n - 1.

#include <iostream>
using namespace std;

int countDown(int);

int main() {

  int num;
  int result;

  do
  {
  cout << "Enter a number (enter 0 to exit): " << endl;
  cin >> num;
  
    if (num != 0){
    result = countDown(num);

    cout << "The factorial of " << num << " = " << result << endl;
    }
  }
  while (num != 0);

  cout << "\n\x1B[32mPROGRAM TERMINATED." << endl;
  cout << "You have escaped the MATRIX..." << endl;

  return 0;
}

int countDown(int n) {
  if (n > 1) {
    return n * countDown(n - 1);
  }
  else {return 1;}
}