#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr;

    cout << *ptr << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + 4) << endl;

    ptr++;
    cout << *ptr << endl;

    return 0;
}
