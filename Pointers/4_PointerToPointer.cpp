#include <iostream>
using namespace std;

int main() {
    int value = 25;
    int* ptr = &value;
    int** ptrToPtr = &ptr;

    cout << "Value: " << value << endl;
    cout << "Using pointer: " << *ptr << endl;
    cout << "Using pointer to pointer: " << **ptrToPtr << endl;

    **ptrToPtr = 50;
    cout << "Updated value: " << value << endl;

    return 0;
}
