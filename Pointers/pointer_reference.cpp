#include <iostream>
using namespace std;

int main() {
    int number = 10;
    int &reference = number;

    cout << "Original value: " << number << endl;
    cout << "Reference value: " << reference << endl;

    reference = 25;

    cout << "After changing reference: " << number << endl;

    return 0;
}
