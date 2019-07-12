/*
 • E2.7
 Write a program that prompts the user for a radius and then prints
 
 •The area and circumference of a circle with that radius
 •The volume and surface area of a sphere with that radius
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double radius;
    cout << "Enter a radius: ";
    cin >> radius;
    
    cout << "The area of a circle with a radius of " << radius << " = " << M_PI * pow(radius, 2) << endl;
    cout << "The circumference of a circle with a radius of " << radius << " = " << 2 * M_PI * radius << endl;
    cout << "The volume of a sphere with a radius of " << radius << " = " << (4/3) * M_PI * pow(radius, 3) << endl;
    cout << "The surface area of a sphere with a radius of " << radius << " = " << 4 * M_PI * pow(radius, 2) << endl;
    
}
