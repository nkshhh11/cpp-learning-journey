#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];   // array declare
    int sum = 0;  // sum store karne ke liye variable

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sum calculate karna
    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    cout << "Sum of elements = " << sum;

    return 0;
}