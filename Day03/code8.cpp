#include <bits/stdc++.h>
using namespace std;

void capitalize(string &str) {
    str[0] = toupper(str[0]); 

}
int main() {
    string subject = "computer science";
    capitalize(subject);
    cout << subject << endl;
    return 0;
}
