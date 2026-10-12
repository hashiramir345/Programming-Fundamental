#include<iostream>
using namespace std;

void Input(int arr[], int size) {
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}
void MergArray(int arr1[], int size1, int arr2[], int size2, int arr3[]) {
    int i = 0, j = 0, k = 0;
    // Merging arr1 and arr2 into arr3
    while (i < size1) {
        arr3[k++] = arr1[i++];
    }
    while (j < size2) {
        arr3[k++] = arr2[j++];
    }
}
void AscendingOrder(int arr[], int size) {
    // Bubble Sort to sort array in ascending order
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int size1, size2;
    
    // Input the size of two arrays
    cout << "Enter the size of the first array: ";
    cin >> size1;
    cout << "Enter the size of the second array: ";
    cin >> size2;
    
    // Declare arrays
    int arr1[size1], arr2[size2], arr3[size1 + size2];
    
    // Call the Input function to fill arrays
    cout << "Input elements for the first array: \n";
    Input(arr1, size1);
    
    cout << "Input elements for the second array: \n";
    Input(arr2, size2);
    
    // Call the MergArray function to merge arr1 and arr2 into arr3
    MergArray(arr1, size1, arr2, size2, arr3);
    
    // Call AscendingOrder to sort the merged array
    AscendingOrder(arr3, size1 + size2);
    
    // Display the merged and sorted array
    cout << "The merged and sorted array is: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;
    
    return 0;
}

