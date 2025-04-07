#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Max-heap by default
    priority_queue<int> pq;

    // Inserting elements using push()
    pq.push(10);
    pq.push(5);
    pq.push(20);

    // Inserting using emplace() (similar to push but more efficient sometimes)
    //pq.emplace(15);

    // Print top element
    cout << "Top element: " << pq.top() << endl;

    // Size of the priority queue
    cout << "Size: " << pq.size() << endl;

    // Check if empty
    if (pq.empty()) {
        cout << "Priority queue is empty" << endl;
    } else {
        cout << "Priority queue is not empty" << endl;
    }

    // Print and pop all elements (in descending order)
    cout << "All elements: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    return 0;
}
