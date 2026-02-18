#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for(int i = 0; i < n; i++) {

        // Spaces for alignment
        for(int k = 0; k < n - i - 1; k++) {
            cout << "  ";
        }

        int val = 1;   // Har row 1 se start hoti hai

        for(int j= 0; j <= i; j++) {
            cout << val << "   ";
            val = val * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}
