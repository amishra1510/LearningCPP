#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*ptr)(int, int) = add;

    cout << "Sum = " << ptr(10, 20) << endl;

    return 0;
}
