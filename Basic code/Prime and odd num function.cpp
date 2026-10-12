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
    int start = 1, end = 20; // Define the range for loop

    for (int i = start; i <= end; i++) {
        // Checking if the number is prime
        if (isPrime(i)) {
            cout << i << " is Prime" << endl;
        }

        // Checking if the number is odd
        isOdd(i);
    }

    return 0;
}

