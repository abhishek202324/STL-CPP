#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> ump;

    // Inserting values
    ump[1] = "Apple";
    ump[2] = "Banana";
    ump[3] = "Orange";

    // Printing elements (unordered)
    cout << "Unordered Map elements:\n";
    for (unordered_map<int, string>::iterator it = ump.begin(); it != ump.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    // Count and Find
    cout << "\nCount of key 2: " << ump.count(2) << endl;
    if (ump.find(3) != ump.end()) {
        cout << "Key 3 found: " << ump[3] << endl;
    }

    // Erase key
    ump.erase(1);
    cout << "\nAfter erasing key 1:\n";
    for (unordered_map<int, string>::iterator it = ump.begin(); it != ump.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    // Size and empty
    cout << "\nSize: " << ump.size() << endl;
    cout << "Is empty? " << (ump.empty() ? "Yes" : "No") << endl;

    return 0;
}
