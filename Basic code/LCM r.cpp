#include <iostream>
using namespace std;

// Function to find the GCD of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// Recursive function to find LCM of three numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int lcmOfThreeNumbers(int a, int b, int c) {
    return lcm(lcm(a, b), c); // LCM of three numbers is LCM of (LCM(a, b), c)
}

int main() {
    int num1, num2, num3;
    
    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Find LCM of three numbers using recursive function
    int result = lcmOfThreeNumbers(num1, num2, num3);
    
    // Output the result
    cout << "LCM of " << num1 << ", " << num2 << " and " << num3 << " is: " << result << endl;
    
    return 0;
}

