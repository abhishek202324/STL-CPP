#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, long> phone;
    int choice;

    while (true) {
        cout << "\n--- Phone Book Menu ---\n";
        cout << "1. Insert a new number by name\n";
        cout << "2. Delete a number by name\n";
        cout << "3. Delete data by phone number\n";
        cout << "4. Print all contacts\n";
        cout << "5. Delete all data\n";
        cout << "6. Print data bucket-wise (learn hashing)\n";
        cout << "7. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        long num;
        string name;
        bool found = false;

        switch (choice) {
            case 1:
                cout << "Enter name: ";
                cin >> name;
                cout << "Enter phone number: ";
                cin >> num;
                phone[name] = num;
                cout << "Added successfully!\n";
                break;

            case 2:
                cout << "Enter name to delete: ";
                cin >> name;
                if (phone.erase(name))
                    cout << "Deleted successfully.\n";
                else
                    cout << "Name not found.\n";
                break;

            case 3:
                cout << "Enter phone number to delete: ";
                cin >> num;
                for (auto it = phone.begin(); it != phone.end(); ++it) {
                    if (it->second == num) {
                        phone.erase(it);
                        cout << "Deleted by number.\n";
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Phone number not found.\n";
                break;

            case 4:
                if (phone.empty())
                    cout << "Phone book is empty.\n";
                else {
                    cout << "Phone Book:\n";
                    for (auto &entry : phone) {
                        cout << "Name: " << entry.first << ", Phone: " << entry.second << endl;
                    }
                }
                break;

            case 5:
                phone.clear();
                cout << "All data cleared.\n";
                break;

            case 6:
                cout << "--- Bucket-wise Data View ---\n";
                for (size_t i = 0; i < phone.bucket_count(); ++i) {
                    cout << "Bucket " << i << ": ";
                    bool empty = true;
                    for (auto it = phone.begin(i); it != phone.end(i); ++it) {
                        cout << "[Name: " << it->first << ", Phone: " << it->second << "] ";
                        empty = false;
                    }
                    if (empty) cout << "(empty)";
                    cout << endl;
                }
                break;

            case 7:
                cout << "Exiting program.\n";
                return 0;

            default:
                cout << "Invalid choice.\n";
        }
    }

    return 0;
}
