/*
 * Sum from 1 to an upperbound using a while-loop
 * Modify the above program to sum all the number between a lowerbound and an upperbound provided by the user.
 * Modify the above program to sum all the odd numbers between 1 to an upperbound. (Hint: Use "number = number + 2".)
 * Modify the above program to sum all the numbers between 1 to an upperbound that are divisible by 7. (Hint: Use "number = number + 7")
 * Modify the above program to find the sum of the square of all the numbers from 1 to an upperbound, i.e. 1*1 + 2*2 + 3*3 +...
 * Modify the above program to compute the product of all the numbers from 1 to 10. (Hint: Use a variable called product instead of sum and initialize product to 1. Ans: 3628800.)
 * Based on this code, write a program to display the factorial of n, where n is an integer between 1 to 12.
 */
#include <iostream>
using namespace std;
 
int main() {
   int sum = 0;    // Declare an int variable sum to accumulate the numbers
                   // Set the initial sum to 0
   int upperbound; // Sum from 1 to this upperbound
 
   // Prompt user for an upperbound
   cout << "Enter the upperbound: ";
   cin >> upperbound;
 
   // Use a loop to repeatedly add 1, 2, 3,..., up to upperbound
   int number = 1;
   while (number <= upperbound) {
      sum = sum + number;   // accumulate number into sum
      ++number;             // increment number by 1
   }
   // Print the result
   cout << "The sum from 1 to " << upperbound << " is " << sum << endl;
 
   return 0;
}