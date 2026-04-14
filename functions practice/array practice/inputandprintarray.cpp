// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    int n;
//    cout<<"enter the size of array : ";
//    cin>>n;
//    int arr[n];
//    cout<<"enter elements : ";
//    for(int i=0;i<n;i++){
//     cin>>arr[i];
//    }
//    cout<<"the elements are : ";
//    for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//    }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main() {
   int a;
   cout<<"enter the size of an array : ";
   cin>>a;
   int arr[a];
   cout<<"enter numbers : ";
   for(int i=0;i<a;i++){
    cin>>arr[i];
   }
   cout<<"the elements are : ";
   for(int i=0;i<a;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
}