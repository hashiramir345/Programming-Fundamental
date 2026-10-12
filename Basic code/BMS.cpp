 #include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string name;
    double balance;

public:
    // Constructor to initialize a bank account with account number, name, and balance
    BankAccount(int accNo, string accName, double initialBalance) {
        accountNumber = accNo;
        name = accName;
        balance = initialBalance;
    }

    // Method to display account details
    void ShowAccount() const {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    // Method to deposit money into the account
    void Deposit() {
        double amount;
        cout << "Enter deposit amount: ";
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully!" << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }

    // Method to withdraw money from the account
    void Withdrawal() {
        double amount;
        cout << "Enter withdrawal amount: ";
        cin >> amount;

        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully!" << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Method to search and display account details based on account number
    bool Search(int accNo) {
        if (accountNumber == accNo) {
            ShowAccount();
            return true;
        }
        return false;
    }

    // Getter method for account number
    int getAccountNumber() const {
        return accountNumber;
    }
};

int main() {
    BankAccount* accounts[100];  // Array to store pointers to BankAccount objects
    int accountCount = 0;  // Counter to keep track of the number of accounts

    while (true) {
        int choice;

        cout << "\n------ Bank Management System ------\n";
        cout << "1. Create Account\n";
        cout << "2. Show Account\n";
        cout << "3. Deposit\n";
        cout << "4. Withdrawal\n";
        cout << "5. Search Account\n";
        cout << "6. Exit\n"; 
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int accNo;
                string accName;
                double balance;

                cout << "Enter account number: ";
                cin >> accNo;
                cout << "Enter account holder name: ";
                cin.ignore();  // To ignore the newline character left by previous input
                getline(cin, accName);
                cout << "Enter opening balance: ";
                cin >> balance;

                // Create a new account and store it in the array
                accounts[accountCount] = new BankAccount(accNo, accName, balance);
                accountCount++;

                cout << "Account created successfully!" << endl;
                break;
            }

            case 2: {
                int accNo;
                cout << "Enter account number to view details: ";
                cin >> accNo;

                bool found = false;
                for (int i = 0; i < accountCount; i++) {
                    if (accounts[i]->Search(accNo)) {
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Account not found!" << endl;
                }
                break;
            }

            case 3: {
                int accNo;
                cout << "Enter account number to deposit money: ";
                cin >> accNo;

                bool found = false;
                for (int i = 0; i < accountCount; i++) {
                    if (accounts[i]->getAccountNumber() == accNo) {
                        accounts[i]->Deposit();
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Account not found!" << endl;
                }
                break;
            }

            case 4: {
                int accNo;
                cout << "Enter account number to withdraw money: ";
                cin >> accNo;

                bool found = false;
                for (int i = 0; i < accountCount; i++) {
                    if (accounts[i]->getAccountNumber() == accNo) {
                        accounts[i]->Withdrawal();
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Account not found!" << endl;
                }
                break;
            }

            case 5: {
                int accNo;
                cout << "Enter account number to search: ";
                cin >> accNo;

                bool found = false;
                for (int i = 0; i < accountCount; i++) {
                    if (accounts[i]->Search(accNo)) {
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Account not found!" << endl;
                }
                break;
            }

            case 6:
                cout << "Exiting the system..." << endl;
                // Free dynamically allocated memory
                for (int i = 0; i < accountCount; i++) {
                    delete accounts[i];
                }
                return 0;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}

