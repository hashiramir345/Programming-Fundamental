#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int num) {
    int fact = 1;
    int i = 1;
    while (i <= num) {
        fact *= i;
        i++;
    }
    return fact;
}

int main() {
    int n, r;
    
    // Input n and r
    cout << "Enter n (number of elements): ";
    cin >> n;
    cout << "Enter r (number of elements to choose): ";
    cin >> r;

    // Validate the input values
    if ( n<r|| n < 0 || r < 0) {
        cout << "Invalid input! Ensure that n >= r and both n and r are non-negative." << endl;
        return 1; // Exit the program with error code 1
    }

    // Calculate nCr using the formula nCr = n! / (r! * (n-r)!)
    int  n_fact = factorial(n);
    int r_fact = factorial(r);
    int n_r_fact = factorial(n - r);

    int nCr = n_fact / (r_fact * n_r_fact);
    
    // Output the result
    cout << "The value of " << n << "C" << r << " is: " << nCr << endl;

    return 0;
}

