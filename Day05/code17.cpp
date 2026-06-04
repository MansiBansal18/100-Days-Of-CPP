#include <iostream>
using namespace std;

void increasingNumberTriangle(int n) {
    int num = 1; // Variable outside the inner loop
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num = num + 1; 
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    increasingNumberTriangle(n);
    return 0;
}