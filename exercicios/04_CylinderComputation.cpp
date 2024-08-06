/*
 * Write a program called CylinderComputation.cpp to print the surface area and volume of a cylinder
 * Your program shall prompt the user for the radius and height of the cylinder, in doubles
 */
#include <iostream>
using namespace std;
 
int main() {
   double radius, heigth, volume , sArea;
   const double PI = 3.14159265;
 
   cout << "Enter the radius: ";
   cin >> radius;
   cout << "Enter the heigth: ";
   cin >> heigth;
 
   sArea = 2.0 * PI * radius * (radius + heigth);
   volume  = PI * radius * radius * heigth;
 
   cout << "The surface area is: " << sArea << endl;
   cout << "The volume  is: " << volume  << endl;
 
   return 0;
}