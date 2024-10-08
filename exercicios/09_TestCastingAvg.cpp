/*
 * Testing type cast
 * rithmetic operations of two int's produce an int; while arithmetic operations of two double's produce a double
 * Arithmetic operations of an int and a double produce a double
 */
#include <iostream>
using namespace std;
 
int main() {
    int sum = 0;      // Sum in "int"
    double average;   // average in "double"
    
    // Compute the sum from 1 to 100 (in "int")
    int number = 1;
    while (number <= 100) {
        sum = sum + number;
        ++number;
    }
    cout << "The sum is " << sum << endl;
    
    // Compute the average (in "double")
    average = sum / 100;                            // Incorrect
    cout << "Average 1 is " << average << endl;
    average = double(sum) / 100;
    cout << "Average 2 is " << average << endl;
    average = sum / 100.0;
    cout << "Average 3 is " << average << endl;
    average = double(sum / 100);                    // Incorrect
    cout << "Average 4 is " << average << endl;
    
    return 0;
}