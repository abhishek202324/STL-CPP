#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> m;
    m[7] = "Seven";

    if (m.count(7)) {
        cout << "Key 7 exists" << endl;
    } else {
        cout << "Key 7 does not exist" << endl;
    }

    // Check a missing key
    if (m.count(9) == 0) {
        cout << "Key 9 does not exist" << endl;
    }

    return 0;
}
