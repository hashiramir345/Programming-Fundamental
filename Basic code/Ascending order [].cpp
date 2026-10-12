#include <iostream>
#include <algorithm>  // For sorting function

using namespace std;

// Function to take input into an array
void Input(int arr[]) {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

// Function to merge two arrays into a third array
void MergArray(int arr1[], int arr2[], int arr3[], int size1, int size2) {
    // Copy elements from arr1 to arr3
    for (int i = 0; i < size1; i++) {
        arr3[i] = arr1[i];
    }
    
    // Copy elements from arr2 to arr3
    for (int i = 0; i < size2; i++) {
        arr3[size1 + i] = arr2[i];
    }
}

// Function to sort the array in ascending order
void AsscendingOrder(int arr[], int size) {
    sort(arr, arr + size);  // Sort the array in ascending order using the built-in sort function
}

// Function to display the array
void Display(int arr[], int size) {
    cout << "The merged and sorted array is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size1, size2;
    
    // Input arrays
    cout << "Enter the size of the first array: ";
    cin >> size1;
    int arr1[size1];
    Input(arr1);

    cout << "Enter the size of the second array: ";
    cin >> size2;
    int arr2[size2];
    Input(arr2);

    // Create a third array to hold the merged elements
    int size3 = size1 + size2;
    int arr3[size3];

    // Merge the arrays
    MergArray(arr1, arr2, arr3, size1, size2);

    // Sort the third array in ascending order
    AsscendingOrder(arr3, size3);

    // Display the third array
    Display(arr3, size3);

    return 0;
}

