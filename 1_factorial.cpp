/*
1. Write a function to calculate the factorial of a number.
*/

#include <iostream>
using namespace std;

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int number;
    cout << "Enter a number to calculate its factorial: ";
    cin >> number;
    
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << number << " is: " << factorial(number) << endl;
    }
    
    return 0;
}
