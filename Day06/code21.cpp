#include <iostream>
using namespace std;

void binaryTriangle(int n) {
    for (int i = 0; i < n; i++) {
        int start = (i % 2 == 0) ? 1 : 0; 
        for (int j = 0; j <= i; j++) {
            cout << start << " ";
            start = 1 - start; 
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    binaryTriangle(n);
    return 0;
}