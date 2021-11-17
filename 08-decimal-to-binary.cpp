// This C++ Program converts a decimal to a binary number

#include <iostream>

using namespace std;

int main(){
    int a[10],n,i;
    // Input a value for Decimal      
    cout << "Enter the number to convert: ";
    cin >> n;
    // Convert the number to Binary
    for(i = 0; n > 0; i++){    
        a[i] = n % 2;    
        n = n / 2;
    }

    cout << endl << "Binary of Given Number is: ";

    for(i = i - 1; i >= 0; i--){    
        cout<<a[i];  
    }
    cout << endl;
    return 0;
}

// OUTPUT EXAMPLE
// Enter the number to convert: 7
// Binary of Given Number is: 111.