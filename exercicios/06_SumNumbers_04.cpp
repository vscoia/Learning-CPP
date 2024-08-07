/*
 * Modify the above program to find the sum of the square of all the numbers from 1 to an upperbound
 * i.e. 1*1 + 2*2 + 3*3 +...
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
      sum += number * number;
      ++number;
   }

   cout << "The sum of the square of all the numbers from 1 to " << upperbound << " is " << sum << endl;

   return 0;
}