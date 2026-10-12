 
 #include <iostream>
using namespace std;

// Function to calculate factorial of a number
int Factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
	}

// Function to calculate nCr (Combination)
int Combination(int n, int r) {
    return Factorial(n) / (Factorial(r) * Factorial(n - r));
}
// Function to print Pascal's Triangle
void pascalTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print leading spaces for formatting
        for (int space = 0; space < rows - i - 1; space++) {
            cout << " ";
        }
        // Calculate and print each value in the row using nCr
        for (int j = 0; j <= i; j++) {
            cout << Combination(i, j) << " ";
        }
        // Move to the next line after each row
        cout << endl;
    }
}
int main() {
    int rows;
    cout << "Enter number of rows for Pascal's Triangle: ";
    cin >> rows;
    pascalTriangle(rows);  // Call function to print Pascal's Triangle
    return 0;
}
