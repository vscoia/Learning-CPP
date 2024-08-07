/*
Write a program to print all the leap years between AD1 and AD2010, and also print the number of leap years
(Hints: use a variable called count, which is initialized to zero. Increment the count whenever a leap year is found.)
 */
#include <iostream>
using namespace std;

int main() {
   int count = 0;
   int upperbound = 2010;

   int number = 1;
   while (number <= upperbound) {
      if ((number % 4 == 0 && number % 100 != 0) || (number % 400 == 0)) {
         cout << number << ", ";
         ++count;
        }
        ++number;
    }
    
   cout << endl << "The total number of leap years are " << count << endl;

   return 0;
}