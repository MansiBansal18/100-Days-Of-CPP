#include <iostream>
using namespace std;

void Tri(int n) {
    for (int i = 0; i < n; i++) {
        // Inner loop runs from 1 to (n-i)
        for (int j = 1; j <= n - i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    Tri(n);
    return 0;
}
