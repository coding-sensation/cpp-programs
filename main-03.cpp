// This C++ Program finds the area of a triangle

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float a, b, c;
    cout << "Enter first side: ";
    cin >> a;
    cout << endl;
    cout << "Enter second side: ";
    cin >> b;
    cout << endl;
    cout << "Enter third side: ";
    cin >> c;
    cout << endl;

    // Calculate the semi-perimeter
    float s = (a + b + c) / 2;

    // Calculate the area
    float area = sqrt((s * (s - a) * (s - b) * (s-c)));
    cout<< "The area of the triangle is "<< area << endl;
    return 0;
}

// OUTPUT EXAMPLE
// Enter first side: 5
// Enter second side: 6
// Enter third side: 7
// The area of the triangle is 14.70.