#include <iostream>
using namespace std;

int main() {
    int first = 10;
    int second = 20;

    int* const ptr = &first;

    cout << "Value: " << *ptr << endl;

    *ptr = 50;
    cout << "Updated value: " << *ptr << endl;

    // ptr = &second;  // Not allowed: ptr itself is constant

    return 0;
}
