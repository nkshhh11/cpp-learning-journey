// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter elements: ";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int max = arr[0];   // assume first element is max
//     for(int i = 1; i < n; i++) {
//         if(arr[i] > max) {
//             max = arr[i];
//         }
//     }
//     cout << "Maximum element is: " << max;
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout<<"enter the size of an array : ";
    cin>>a;
    int arr[a];
    cout<<"enter the elements : ";
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=1;i<a;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<"the maximum number is : "<<max<<endl;
    return 0;
}