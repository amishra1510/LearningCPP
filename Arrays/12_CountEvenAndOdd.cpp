#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 7, 2, 9, 6, 3, 8};
    int size = 7;
    int even = 0;
    int odd = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even elements: " << even << endl;
    cout << "Odd elements: " << odd << endl;

    return 0;
}
