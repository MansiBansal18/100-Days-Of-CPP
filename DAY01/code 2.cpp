#include <bits/stdc++.h>
using namespace std;

int main() {
    int choice;
    cout << "Enter choice (1 for English, 2 for Hindi): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Hello!" << endl;
            break;
        case 2:
            cout << "Namaste!" << endl;
            break;
        default:
            cout << "Language not supported." << endl;
    }
    return 0;
}
