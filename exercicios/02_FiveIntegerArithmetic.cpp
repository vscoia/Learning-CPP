/* 
 * Prompt user for 5 integers, with 5 "cin >>" statements, and print their sum and product
 * Use five int variables integer1 to integer5 to store the five integers
 */
#include <iostream>
using namespace std;
 
int main() {
   int integer1;
   int integer2;
   int integer3;
   int integer4;
   int integer5;
   int sum, product;
 
   cout << "Enter first integer: ";
   cin >> integer1;
   cout << "Enter second integer: ";
   cin >> integer2;
   cout << "Enter third integer: ";
   cin >> integer3;
   cout << "Enter fourth integer: ";
   cin >> integer4;
   cout << "Enter fifth integer: ";
   cin >> integer5;

   sum        = integer1 + integer2 + integer3 + integer4 + integer5;
   product    = integer1 * integer2 * integer3 * integer4 * integer5;
 
   cout << "The sum is: " << sum << endl;
   cout << "The product is: " << product << endl;
   cout << "The integers were: " << integer1 << ", " << integer2 << ", " << integer3 << ", " << integer4 << ", " << integer5 << endl;
   
   return 0;
}