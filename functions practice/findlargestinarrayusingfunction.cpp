#include <iostream>
using namespace std;
int findLargest(int arr[], int size) {
    int largest = arr[0]; 
      for(int i = 1; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

int main() {
    int n;

    cout << "Enter number of elements: "; 
    cin >> n;

    int arr[n];

    cout << "Enter elements: "; 
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findLargest(arr, n); 

    cout << "Largest element is: " << result << endl; 

    return 0; 
}