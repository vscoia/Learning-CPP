/*
 * Write a program called GeometricSeriesSum to compute the sum of a geometric series 1 + 1/2 + 1/4 + 1/8 + .... + 1/n.
 * You program shall prompt for the value of n. (Hints: Use post-processing statement of denominator = denominator * 2.)
 */
#include <iostream>
using namespace std;

int main() {
   int maxDenominator;  // max denominator to sum to
   double sum = 0.0;    // For accumulating sum in double
   
   // Prompt user for the maxDenominator
   cout << "Enter the value of n:  ";
   cin >> maxDenominator;

   int denominator = 1;
   while (denominator <= maxDenominator) {
      // Beware that int/int gives int
      sum += 1.0 / denominator;
      denominator = denominator * 2;  // next
   }

   // Print the sum
   cout << "The sum of the geometric series " << maxDenominator << " is " << sum << endl;
    
   return 0;
}