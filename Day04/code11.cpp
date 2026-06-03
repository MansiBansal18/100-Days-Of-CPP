#include <iostream>
using namespace std;

void inverted_pyramid(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) cout << " ";
        for (int j = 0; j < 2 * n - (2 * i + 1); j++) cout << "*";
        cout << endl;
    }
}

int main() {
    inverted_pyramid(5);
    return 0;
}