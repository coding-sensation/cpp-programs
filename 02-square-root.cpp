// This C++ Program calculates the square root

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    // Take the input from the user
    double number;
    cout << "Enter a number: ";
    cin >> number;
    double square_root = sqrt(number);

    cout << "The square root of " << fixed << setprecision(3) 
    << number << " is " << square_root << ".";
    return 0;
}

// OUTPUT EXAMPLE
// Enter a number: 25
// The square root of 25.000 is 5.000.