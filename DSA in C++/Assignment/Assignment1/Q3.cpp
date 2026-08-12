#include <iostream>
using namespace std;

int main() {
    int arr[100], n, k;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter K: ";
    cin >> k;

    k = k % n;

    // Left Rotation
    cout << "Left Rotation: ";
    for(int i = k; i < n; i++)
        cout << arr[i] << " ";
    for(int i = 0; i < k; i++)
        cout << arr[i] << " ";

    cout << endl;

    // Right Rotation
    cout << "Right Rotation: ";
    for(int i = n - k; i < n; i++)
        cout << arr[i] << " ";
    for(int i = 0; i < n - k; i++)
        cout << arr[i] << " ";

    return 0;
}