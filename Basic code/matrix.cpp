#include <iostream>
using namespace std;

// Function to input a matrix
void InputMatrix(int matrix[3][3]) {
    cout << "Enter the elements of the matrix (3x3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
}

// Function to multiply two matrices and store the result in matrix C
void MultiplyMatrices(int A[3][3], int B[3][3], int C[3][3]) {
    // Perform matrix multiplication: C = A * B
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0;  // Initialize the result matrix element to 0
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];  // Sum the products of corresponding elements
            }
        }
    }
}

// Function to display a matrix
void DisplayMatrix(int matrix[3][3]) {
    cout << "Resulting matrix is:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[3][3], B[3][3], C[3][3];
 
    // Input matrices A and B
    cout << "Enter elements for Matrix A:";
    InputMatrix(A);

    cout << "Enter elements for Matrix B:";
    InputMatrix(B);

    // Multiply matrices A and B, and store the result in matrix C
    MultiplyMatrices(A, B, C);

    // Display the resulting matrix C
    DisplayMatrix(C);

    return 0;
}

