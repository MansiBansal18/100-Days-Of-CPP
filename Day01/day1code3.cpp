#include <bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 18) {
        cout << "Not eligible for job." << endl;
    } 
    else {
        if (age <= 57) {
            cout << "Eligible for job." << endl;
            if (age >= 55) {
                cout << "But retirement is soon!" << endl;
            }
        } 
        else {
            cout << "Retired." << endl;
        }
    }
    return 0;
}