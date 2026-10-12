#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);  // Input string with spaces
    
    string reversedStr = "";
    
    // Reverse the string
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }
    
    cout << "Reversed string: " << reversedStr << endl;
    
    return 0;
}
