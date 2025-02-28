#include <iostream>
#include "area.h"

using namespace std;

int main() {
    cout << "Exercise 0x02" << endl;
    
    cout << "Rectangle area: " << area(5.0, 10.0) << endl;
    cout << "Circle area: " << area(4.0) << endl;
    cout << "Triangle area: " << area(3.0, 4.0, 5.0) << endl;
    return 0;
}