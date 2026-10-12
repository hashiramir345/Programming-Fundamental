#include <iostream>
using namespace std;

int main()
{

    char exit;
    do
    {
        float num1, num2;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

    invalidChoice:
        int choice;
        cout << "Press 1 for sum" << endl
             << "Press 2 for subtract" << endl
             << "Press 3 for product" << endl
             << "Press 4 for divide" << endl
             << "Press 5 for modulus" << endl
             << "Enter you choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4)
        {
            if (choice == 1)
            {
                cout << "The sum of " << num1 << " and " << num2 << " is: " << num1 + num2 << endl;
            }
            else if (choice == 2)
            {
                cout << "The difference of " << num1 << " and " << num2 << " is: " << num1 - num2 << endl;
            }
            else if (choice == 3)
            {
                cout << "The multiply of " << num1 << " and " << num2 << " is: " << num1 * num2 << endl;
            }
            else if (choice == 4)
            {
                cout << "The divide of " << num1 << " and " << num2 << " is: " << num1 / num2 << endl;
            }
            else
            {
                cout << "The modulus of " << num1 << " and " << num2 << " is: " << (int)num1 / (int)num2 << endl;
            }
        }
        else
        {
            cout << "Invalid choice selection. kindly enter valid chioce again" << endl;
            goto invalidChoice;
        }

        cout << "Press # for exit. And any other key for continue: ";
        cin >> exit;

    } while (exit != '#');

    cout << "Thanks for using" << endl;
    return 0;
}
