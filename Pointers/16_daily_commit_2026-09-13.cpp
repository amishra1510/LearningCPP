#include <iostream>
using namespace std;

int main() {
    int value = 42;
    int* ptr = &value;

    cout << "Value: " << value << endl;
    cout << "Address: " << ptr << endl;
    cout << "Value using pointer: " << *ptr << endl;

    *ptr = 100;
    cout << "Updated value: " << value << endl;

    return 0;
}
