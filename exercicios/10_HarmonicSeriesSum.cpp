/*
 * Sum harmonics Series
 * Write a program called HarmonicSeriesSum to compute the sum of a harmonic series 1 + 1/2 + 1/3 + 1/4 + .... + 1/n, 
 * where n = 1000. Your program shall prompt user for the value of n
 * Keep the sum in a double variable, and take note that 1/2 gives 0 but 1.0/2 gives 0.5
 * Try computing the sum for n=1000, 5000, 10000, 50000, 100000
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
      ++denominator;  // next
   }

   // Print the sum
   cout << "The sum of the harmonic series " << maxDenominator << " is " << sum << endl;
   
   return 0;
}