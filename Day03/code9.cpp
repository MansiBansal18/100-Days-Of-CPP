#include <iostream>
using namespace std;

void Array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = 0; 
    }
}

int main() {
    int scores[3] = {85, 90, 78};
    cout << "Original: " << scores[0] << ", " << scores[1] << ", " << scores[2] << endl;
    Array(scores, 3);
    cout << "After Reset: " << scores[0] << ", " << scores[1] << ", " << scores[2] << endl;
    return 0;
}