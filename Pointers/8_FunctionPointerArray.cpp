#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int (*operations[])(int, int) = {add, subtract, multiply};

    cout << "Add = " << operations[0](10, 5) << endl;
    cout << "Subtract = " << operations[1](10, 5) << endl;
    cout << "Multiply = " << operations[2](10, 5) << endl;

    return 0;
}
