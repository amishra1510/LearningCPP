#include <iostream>
using namespace std;

int main() {
    int value = 40;
    const int* ptr = &value;

    cout << "Value: " << value << endl;
    cout << "Value through pointer: " << *ptr << endl;

    value = 80;
    cout << "Updated value: " << *ptr << endl;

    return 0;
}
