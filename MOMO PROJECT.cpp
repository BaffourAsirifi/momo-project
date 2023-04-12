#include <iostream>

using namespace std;

int main()
{
    int balance = 1000;
    int default_pin = 0000;
    int attempts = 0;

    while(true){

        int user_opt;

        cout << "Welcome to Mobile Money Service" << endl;
        cout << "Select an option:" << endl;
        cout << "1. Authentication" << endl;
        cout << "2. Reset/Change Pin" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Send Money" << endl;
        cout << "0. Press 0 Exit" << endl;
        cout << "\n";

        cin >> user_opt;

        switch(user_opt){
        case 1:

            int user_pin;

            cout << "Enter your PIN: ";
            cin >> user_pin;

            if (user_pin == default_pin) {
                cout << "Authentication successful" << endl;
                attempts = 0;
            } else {
                attempts++;
                cout << "Incorrect PIN. Attempts remaining: " << 3 - attempts << endl;
                if (attempts == 3) {
                    cout << "Too many incorrect attempts. Program exiting." << endl;
                    return 0;
                }
            }
            break;


            case 2:
                int new_pin;
                cout << "Enter new PIN: ";
                cin >> new_pin;
                default_pin = new_pin;
                cout << "PIN changed successfully" << endl;
                break;


            case 3:
                cout << "Current balance: " << balance << endl;
                break;

            case 4:
                int recipient_number;
                int amount;
                int pin;

                cout << "Enter recipient phone number: ";
                cin >> recipient_number;
                cout << "Enter amount to send: ";
                cin >> amount;
                cout << "Enter pin: ";
                cin >> user_pin;

                if (amount <= balance) {
                    balance -= amount;
                    user_pin == new_pin;
                    cout << "Transaction successful" << endl;
                } else {
                    cout << "Insufficient balance" << endl;
                }
                break;


            case 5:
                cout << "Exiting program. Thank you for using Mobile Money Service." << endl;
                return 0;


            default:
                cout << "Invalid option. Please select again." << endl;


        }
    }

    return 0;
}
