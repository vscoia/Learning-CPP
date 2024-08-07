/*
 * Modify the above program to sum all the odd numbers between 1 to an upperbound. (Hint: Use "number = number + 2".)
 */
#include <iostream>
using namespace std;
 
int main() {
   int sum = 0;
   int upperbound; 
 
   cout << "Enter the upperbound: ";
   cin >> upperbound;
 
   int number = 1;
   while (number <= upperbound) {
      sum = sum + number;   
      number = number + 2; 
   }

   cout << "The sum of odd numbers from 1 to " << upperbound << " is " << sum << endl;
   
   return 0;
}