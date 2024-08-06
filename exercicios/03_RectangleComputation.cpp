/*
 * Write a program called RectangleComputation.cpp to print the area and perimeter of a rectangle
 * Your program shall prompt the user for the length and width of the rectangle, in doubles
 */
#include <iostream>
using namespace std;
 
int main() {
   double  area, perimeter, length, width;   // Declare 4 floating-point variables
 
   cout << "Enter the length: ";             // Prompt user for the length
   cin >> length;
   cout << "Enter the width: ";              // Prompt user for the width
   cin >> width;
 
   // Compute area and perimeter
   area = length * width;
   perimeter = 2.0 * (length + width);
 
   // Print the results
   cout << "The area is: " << area << endl;
   cout << "The perimeter is: " << perimeter << endl;
 
   return 0;
}