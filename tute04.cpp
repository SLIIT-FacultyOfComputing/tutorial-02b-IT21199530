/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
long Factorial(int no)
{
  int fac = 1;
    for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }
    return fac;
}
long nCr(int n, int r)

{
  int fac1=1;
  int fac2=1;
  int fac3=1;
  int ncr;
  int x,y,z;
  for (int x=n; x >= 1; x--) {
        fac1 = fac1 * x;
    }
 
  for (int y=r; y >= 1; y--) {
        fac2 = fac2 * y;
    }
  
   for (int z=(n-r); z >= 1; z--) {
        fac3 = fac3 * z;
    }

  ncr=fac1/(fac2*fac3);

return ncr;
  
}
