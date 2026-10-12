#include <iostream>
using namespace std;

// Function to check if the number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to check if the number is odd
void isOdd(int n) {
    if (n % 2 != 0) {
        cout << n << " is Odd" << endl;
    }
}

int main() {
    // Loop from 28 to 2, decreasing by 2 for the first number
    for (int i = 28; i >= 15; i -= 2) {
        int complement = 30 - i;
        
        // Check if complement is even and print if the sum equals 30
        if (complement % 2 == 0) {
            cout << i << " + " << complement << " = 30" << endl;
        }
    }

    return 0;
}

