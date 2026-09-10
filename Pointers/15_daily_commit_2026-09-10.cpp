#include <iostream>
using namespace std;

int main() {
    int value = 10;
    int* ptr = &value;

    cout << "Value: " << value << endl;
    cout << "Value through pointer: " << *ptr << endl;

    return 0;
}
