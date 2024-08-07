/*
 * Write a program to sum all the integers between 1 and 1000, that are divisible by 13, 15 or 17, but not by 30.
 */
#include <iostream>
using namespace std;
 
int main() {
   int sum = 0;
   int upperbound = 1000;

   int number = 1;
   while (number <= upperbound) {
      if ((number % 13 == 0 || number % 15 == 0 || number % 17 == 0) && number % 30 != 0) {
         sum += number;
      }
      ++number;
   }
   
   cout << "The sum of all the integers between 1 and 1000, that are divisible by 13, 15, or 17, but not by 30 is " << sum << endl;

   return 0;
}