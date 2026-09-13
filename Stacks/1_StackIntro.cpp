#include <iostream>
using namespace std;

int main() {
    int stack[5];
    int top = -1;

    // Push elements into the stack
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    cout << "Top element: " << stack[top] << endl;

    // Pop the top element
    cout << "Popped element: " << stack[top--] << endl;

    cout << "Top element after pop: " << stack[top] << endl;

    return 0;
}
