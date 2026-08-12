#include <iostream>
using namespace std;

int main() {
    int r, c;
    int A[10][10];

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter matrix:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> A[i][j];

    cout << "Transpose:\n";

    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++)
            cout << A[j][i] << " ";
        cout << endl;
    }

    return 0;
}