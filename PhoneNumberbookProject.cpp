#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, long> phone;
    int choice;
    
    while (true) {
        cout << "\nWelcome to the Phone Number Book:\n";
        cout << "Press 1 to insert a new number by the name\n";
        cout << "Press 2 to delete a number by the name\n";
        cout << "Press 3 to delete data by phone number\n";
        cout << "Press 4 to print all numbers\n";
        cout << "Press 5 to quit the program\n";
        cout << "Please enter your choice: ";
        cin >> choice;

        long Num;
        string namee;
        bool found = false;

        switch (choice) {
            case 1:
                cout << "Enter the name: ";
                cin >> namee;
                cout << "Enter the phone number: ";
                cin >> Num;
                phone[namee] = Num;
                cout << "Your phone number has been added to the phone book.\n";
                break;

            case 2:
                cout << "Enter the name you want to delete: ";
                cin >> namee;
                if (phone.erase(namee)) {
                    cout << "Deleted successfully.\n";
                } else {
                    cout << "Name not found in phone book.\n";
                }
                break;

            case 3:
                cout << "Enter the phone number you want to delete: ";
                cin >> Num;
                for (auto it = phone.begin(); it != phone.end(); ++it) {
                    if (it->second == Num) {
                        phone.erase(it);
                        found = true;
                        cout << "Deleted successfully by phone number.\n";
                        break;
                    }
                }
                if (!found) {
                    cout << "Phone number not found.\n";
                }
                break;

            case 4:
                if (phone.empty()) {
                    cout << "Phone book is empty.\n";
                } else {
                    cout << "Here is your phone book:\n";
                    for (auto &entry : phone) {
                        cout << "Name: " << entry.first << ", Phone: " << entry.second << endl;
                    }
                }
                break;

            case 5:
                cout << "Exiting the program. Goodbye!\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
