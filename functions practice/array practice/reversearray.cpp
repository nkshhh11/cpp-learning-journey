// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;

//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter elements: ";
//     for(int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Reversed array is: ";

//     for(int i = n-1; i >= 0; i--)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
   int a;
   cout<<"enter the size of an array : ";
   cin>>a;
   int arr[a];
   cout<<"enter the element : ";
   for(int i=0;i<a;i++){
    cin>>arr[i];
   }
   cout<<"reversed array is : ";
   for(int i=a-1;i>=0;i--){
   cout<<arr[i]<<" ";
   }
    return 0;
}