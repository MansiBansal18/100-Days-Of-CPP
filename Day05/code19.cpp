#include <iostream>
using namespace std;

void hollowSquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Logic: Print star if it's first/last row OR first/last column
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    hollowSquare(n);
    return 0;
}