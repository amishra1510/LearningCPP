#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    int sum = 0;
    int maximum = arr[0];
    int minimum = arr[0];

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (arr[i] > maximum)
            maximum = arr[i];

        if (arr[i] < minimum)
            minimum = arr[i];
    }

    double average = (double)sum / n;

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nSum: " << sum;
    cout << "\nAverage: " << average;
    cout << "\nMaximum: " << maximum;
    cout << "\nMinimum: " << minimum;

    return 0;
}