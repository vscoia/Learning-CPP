/*
 * Modify the above program to sum all the numbers between 1 to an upperbound that are divisible by 7.
 * (Hint: Use "number = number + 7")
 */
#include <iostream>
using namespace std;

int main() {
   int sum = 0;
   int upperbound;

   cout << "Enter the upperbound: ";
   cin >> upperbound;

   int number = 7;
   while (number <= upperbound) {
      sum = sum + number;
      number = number + 7;
   }

   cout << "The sum from 1 to " << upperbound << " is " << sum << endl;
   
   return 0;
}