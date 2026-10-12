#include <iostream>
using namespace std;

class Counter {
    int count;
    
public:
    Counter() {  // Default Constructor
        count = 0;
        cout << "Counter initialized to 0" << endl;
    }

    Counter(int c) {  // Parameterized Constructor
        count = c;
        cout << "Counter initialized to " << count << endl;
    }

    Counter(const Counter &obj) {  // Copy Constructor
        count = obj.count;
        cout << "Counter copied with value " << count << endl;
    }
    ~Counter() {  // Destructor
        cout << "Counter with value " << count << " is destroyed" << endl;
    }
    void increment() {
        count++;
    }

    void display() {
        cout << "Current count: " << count << endl;
    }
};

int main() {
    Counter c1;          // Default constructor
    Counter c2(10);      // Parameterized constructor
    Counter c3 = c2;     // Copy constructor
    
    c1.increment();
    c2.increment();
    c3.increment();
    
    c1.display();
    c2.display();
    c3.display();
    
    return 0;
}  

