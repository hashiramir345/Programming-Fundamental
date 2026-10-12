#include <iostream>
#include <string>
using namespace std;

class Room {
private:
    int roomNumber;
    string roomType;
    double price;
    bool isBooked;

public:
    // Constructor
    Room(int num, string type, double p) {
        roomNumber = num;
        roomType = type;
        price = p;
        isBooked = false;
    }

    // Function to book the room
    void bookRoom() {
        if (!isBooked) {
            isBooked = true;
            cout << "Room " << roomNumber << " has been successfully booked!" << endl;
        } else {
            cout << "Room " << roomNumber << " is already booked." << endl;
        }
    }

    // Function to check out the room
    void checkOut() {
        if (isBooked) {
            isBooked = false;
            cout << "Room " << roomNumber << " is now available." << endl;
        } else {
            cout << "Room " << roomNumber << " was not booked." << endl;
        }
    }

    // Function to display room details
    void displayRoomInfo() {
        cout << "Room Number: " << roomNumber << endl;
        cout << "Room Type: " << roomType << endl;
        cout << "Price: $" << price << endl;
        cout << "Status: " << (isBooked ? "Booked" : "Available") << endl;
    }

    // Getter for roomNumber
    int getRoomNumber() {
        return roomNumber;
    }

    // Getter for room status
    bool getIsBooked() {
        return isBooked;
    }
};
class Hotel {
private:
    Room* rooms[10]; // Array to store up to 10 rooms

public:
    // Constructor to initialize rooms
    Hotel() {
        rooms[0] = new Room(101, "Single", 50.0);
        rooms[1] = new Room(102, "Single", 50.0);
        rooms[2] = new Room(103, "Double", 75.0);
        rooms[3] = new Room(104, "Double", 75.0);
        rooms[4] = new Room(105, "Suite", 100.0);
        rooms[5] = new Room(106, "Suite", 100.0);
        rooms[6] = new Room(107, "Penthouse", 200.0);
        rooms[7] = new Room(108, "Penthouse", 200.0);
        rooms[8] = new Room(109, "Single", 50.0);
        rooms[9] = new Room(110, "Single", 50.0);
    }

    // Function to display all available rooms
    void displayRooms() {
        for (int i = 0; i < 10; i++) {
            rooms[i]->displayRoomInfo();
            cout << "-----------------------------" << endl;
        }
    }

    // Function to book a room by room number
    void bookRoom(int roomNumber) {
        bool roomFound = false;
        for (int i = 0; i < 10; i++) {
            if (rooms[i]->getRoomNumber() == roomNumber) {
                roomFound = true;
                rooms[i]->bookRoom();
                break;
            }
        }
        if (!roomFound) {
            cout << "Room number " << roomNumber << " not found." << endl;
        }
    }

    // Function to check out a room by room number
    void checkOutRoom(int roomNumber) {
        bool roomFound = false;
        for (int i = 0; i < 10; i++) {
            if (rooms[i]->getRoomNumber() == roomNumber) {
                roomFound = true;
                rooms[i]->checkOut();
                break;
            }
        }
        if (!roomFound) {
            cout << "Room number " << roomNumber << " not found." << endl;
        }
    }
};
int main() {
    Hotel myHotel;

    int choice, roomNumber;

    while (true) {
        cout << "Welcome to the Hotel Management System!" << endl;
        cout << "1. Display Rooms" << endl;
        cout << "2. Book Room" << endl;
        cout << "3. Check-Out Room" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                myHotel.displayRooms();
                break;
            case 2:
                cout << "Enter room number to book: ";
                cin >> roomNumber;
                myHotel.bookRoom(roomNumber);
                break;
            case 3:
                cout << "Enter room number to check-out: ";
                cin >> roomNumber;
                myHotel.checkOutRoom(roomNumber);
                break;
            case 4:
                cout << "Thank you for using the Hotel Management System!" << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}

