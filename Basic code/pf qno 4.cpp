#include <iostream>
using namespace std;

// Function to input a matrix
void inputMatrix(int matrix[3][3], const string& name) {
    cout << "Enter the elements of matrix " << name << " (3x3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int A[3][3], int B[3][3], int C[3][3]) {
    // Initialize the resulting matrix C with zeros
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[3][3], const string& name) {
    cout << "Matrix " << name << " is:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Declare matrices
    int A[3][3], B[3][3], C[3][3];

    // Input matrices A and B
    inputMatrix(A, "A");
    inputMatrix(B, "B");

    // Multiply matrices A and B
    multiplyMatrices(A, B, C);

    // Display the resulting matrix C
    displayMatrix(C, "C");

    return 0;
}

