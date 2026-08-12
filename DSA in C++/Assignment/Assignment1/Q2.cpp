#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; ) {
            if(arr[i] == arr[j]) {
                for(int k = j; k < n - 1; k++)
                    arr[k] = arr[k + 1];
                n--;
            }
            else
                j++;
        }
    }

    cout << "Array after removing duplicates:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}