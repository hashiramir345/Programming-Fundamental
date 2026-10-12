#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to count the frequency of digits
void findMostFrequentDigits(int arr[], int size) {
    // Array to store count of digits (0-9)
    vector<int> digitCount(10, 0);
    
    // Loop through each number in the array
    for (int i = 0; i < size; i++) {
        int num = arr[i];
        
        // For each number, extract its digits
        while (num != 0) {
            int digit = num % 10; // Extract the last digit
            digitCount[digit]++;  // Increment the count for this digit
            num /= 10;            // Remove the last digit
        }
    }

    // Find the highest frequency
    int maxCount = INT_MIN;
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
        }
    }

    // Display the most frequent digit(s)
    cout << "Most frequent digit(s): ";
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] == maxCount) {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "Frequency: " << maxCount << endl;
}

int main() {
    int size;
    
    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    
    // Input the array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Call the function to find the most frequent digit(s)
    findMostFrequentDigits(arr, size);

    return 0;
}

