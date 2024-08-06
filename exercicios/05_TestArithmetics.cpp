/*
 * Introduce one more int variable called number3, and prompt user for its value
 * Print the sum and product of all the three integers
 * In Mathematics, we could omit the multiplication sign in an arithmetic expression, e.g., x = 5a + 4b
 * In programming, you need to explicitly provide all the operators, i.e., x = 5*a + 4*b
 * Try printing the sum of 31 times of number1 and 17 times of number2 and 87 time of number3
 */
#include <iostream>
using namespace std;
 
int main() {
     int number1, number2, number3;  // Declare 3 integer variables
     int sum, difference, product, quotient, remainder;  // declare 5 int variables
 
     // Prompt user for the three numbers
     cout << "Enter three integers (separated by space): ";
     cin >> number1 >> number2 >> number3;
 
     // Arithmetic Operations
     sum = number1 + number2 + number3;
     difference = number1 - number2;
     product = number1 * number2 * number3;
     quotient = number1 / number2;
     remainder = number1 % number2;
 
     cout << "The sum, difference, product, quotient and remainder of "
        << number1 << " and " << number2 << " are "
        << sum << ", "
        << difference << ", "
        << product << ", "
        << quotient << ", and "
        << remainder << endl;
 
     // Sum and Product of all three integers
     cout << "The sum of " << number1 << ", " << number2 << ", and " << number3
          << " is " << (number1 + number2 + number3) << endl;
     cout << "The product of " << number1 << ", " << number2 << ", and " << number3
          << " is " << (number1 * number2 * number3) << endl;

     // Sum of 31xnumber1, 17xnumber2, 87xnumber3
     int extrasum = (31 * number1) + (17 * number2) + (87 * number3);
     cout << "The sum of 31 times " << number1 << ", 17 times " << number2
          << ", and 87 times " << number3 << " is " << extrasum << endl;


     // Increment and Decrement
     ++number1;     // Increment the value stored in variable number1 by 1
                    // same as "number1 = number1 + 1"
     --number2;     // Decrement the value stored in variable number2 by 1
                    // same as "number2 = number2 - 1"
     cout << "number1 after increment is " << number1 << endl;
     cout << "number2 after decrement is " << number2 << endl;
     
     quotient = number1 / number2;
     cout << "The new quotient of " << number1 << " and " << number2
          << " is " << quotient << endl;

     return 0;
}
