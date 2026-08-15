#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[5] = {16, 41, 34, 4, 21};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = INT16_MIN;
    int smax = INT16_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] != max && arr[i] > smax) {
            smax = arr[i];
        }
    }

    cout << "Maximum = " << max << endl;
    cout << "Second Maximum = " << smax << endl;

    return 0;
}