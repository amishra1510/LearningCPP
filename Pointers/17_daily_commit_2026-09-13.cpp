#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    int* p = &a;

    cout << "Before: " << a << endl;
    *p = b;
    cout << "After: " << a << endl;

    return 0;
}
