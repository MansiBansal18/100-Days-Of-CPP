#include <iostream>
using namespace std;

void modifyValue(int num) {
    num = num * num; 
    cout << "after function: " << num << endl;
}

int main() {
    int x = 10;
    cout << "before function: " << x << endl;
    modifyValue(x);  
    cout << "original value: " << x << endl;
    return 0;
}