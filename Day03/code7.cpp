#include <iostream>
using namespace std;

void addMoney(int &balance, int amount) {
    balance += amount; 
}

int main() {
    int myWallet = 500;
    cout << "Wallet before: " << myWallet << endl;
    addMoney(myWallet, 200);
    cout << "Wallet after: " << myWallet << endl;
    return 0;
}