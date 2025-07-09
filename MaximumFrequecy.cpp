#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 1, 4, 2};
    unordered_map<int, int> freq;

    // Count frequencies
    for (int x : arr) {
        freq[x]++;
    }

    // Find the element with maximum frequency
    int maxFreq = 0;
    int maxElement = -1;

    for (auto it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            maxElement = it.first;
        }
    }

    cout << "Element with max frequency: " << maxElement << " (appears " << maxFreq << " times)" << endl;

    return 0;
}
