#include <bits/stdc++.h>
using namespace std;

int power(int base, int exp) {
    int result = 1;
    for(int i = 1; i <= exp; i++) {
        result = result * base;
    }
    return result;
}

int main() {
    int base, exp;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;

    cout << "Answer = " << power(base, exp);
    return 0;
}