#include <iostream>
#include <cmath>
#include "area.h"

using namespace std;

double area(double width, double height) {
    return width * height; 
}

double area(double radius) {
    return pow(radius, 2) * M_PI;
}

double area(double side1, double side2, double side3) {
    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        cout << "This is not a valid Triangle! The total length of two sides must be bigger than the last side." << endl;
        return -1; // Return an error value
    }
    
    double s = (side1 + side2 + side3) / 2;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}
