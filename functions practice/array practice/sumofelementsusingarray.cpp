// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];   // array declare
//     int sum = 0;  // sum store karne ke liye variable

//     cout << "Enter elements: ";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     // Sum calculate karna
//     for(int i = 0; i < n; i++) {
//         sum = sum + arr[i];
//     }

//     cout << "Sum of elements = " << sum;

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
   int a;
   cout<<"enter the size of an array : ";
   cin>>a;
   int arr[a];
   int sum=0;
   cout<<"enter the elements : ";
   for(int i=0;i<a;i++){
    cin>>arr[i];
   }
   for(int i=0;i<a;i++){
    sum=sum+arr[i];
   }
   cout<<"the sum of whole array is : "<<sum;
    return 0;
}