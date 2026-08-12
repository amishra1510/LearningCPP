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

    cout << "\nRow Sums:\n";
    for(int i = 0; i < r; i++) {
        int sum = 0;
        for(int j = 0; j < c; j++)
            sum += A[i][j];
        cout << "Row " << i + 1 << " = " << sum << endl;
    }

    cout << "\nColumn Sums:\n";
    for(int j = 0; j < c; j++) {
        int sum = 0;
        for(int i = 0; i < r; i++)
            sum += A[i][j];
        cout << "Column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}
