#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int (*ptr)[5] = &numbers;

    cout << "First element: " << (*ptr)[0] << endl;
    cout << "Third element: " << (*ptr)[2] << endl;
    cout << "Fifth element: " << (*ptr)[4] << endl;

    return 0;
}
