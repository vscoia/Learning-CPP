/*
 * Modify the above program to sum all the number between a lowerbound and an upperbound provided by the user.
 */
#include <iostream>
using namespace std;
 
int main() {
   int sum = 0;
   int lowerbound;           
   int upperbound;
 
   cout << "Enter the lowerbound: ";
   cin >> lowerbound;
   cout << "Enter the upperbound: ";
   cin >> upperbound;

   int number = lowerbound;
   while (number <= upperbound) {
      sum = sum + number;
      ++number;
   }
   
   cout << "The sum from " << lowerbound << " to " << upperbound << " is " << sum << endl;
 
   return 0;
}