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
    return  true;
}

// Function to check if the number is odd (just for demonstration, as it's not directly needed here)
void isOdd(int n) {
    if (n % 2 != 0) {
        cout << n << " is Odd" << endl;
    }
}

int main() {
    // Loop through numbers from 2 to 100
    for (int i = 2; i <= 50; i++) {
        if (isPrime(i)) {
            int complement = 100 - i;
            // Check if the complement is also a prime number
            if (isPrime(complement)) {
                cout << i << " + " << complement << " = 100" << endl;
            }
        }
    }

    return 0;
}

