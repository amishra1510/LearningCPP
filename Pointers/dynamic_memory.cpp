#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int* numbers = new int[size];

    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

    cout << "Sum: " << sum << endl;

    delete[] numbers;
    numbers = nullptr;

    return 0;
}
