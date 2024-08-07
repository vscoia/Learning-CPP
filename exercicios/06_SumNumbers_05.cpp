/*
   Modify the above program to compute the product of all the numbers from 1 to 10
   (Hint: Use a variable called product instead of sum and initialize product to 1. Ans: 3628800.)
   Based on this code, write a program to display the factorial of n, where n is an integer between 1 to 12 
 */
#include <iostream>
using namespace std;

int main() {
   int product = 1;
   int upperbound = 12;

   cout << "Enter the upperbound: ";
   cin >> upperbound;

   int number = 1;
   while (number <= upperbound) {
      product = product * number;
      ++number;
   }

   cout << "The product from 1 to " << upperbound << " is " << product << endl;

   return 0;
}