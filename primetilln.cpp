



// #include <iostream>
// using namespace std;

// int main() {

//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     for(int j = 1; j <= n; j++) {

//         int count = 0;   // har number ke liye reset

//         for(int i = 1; i <= j; i++) {
//             if(j % i == 0) {
//                 count++;
//             }
//         }

//         if(count == 2) {
//             cout << j << " ";
//         }
//     }

//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cout<<"enter the number : ";
   cin>>n;
   for(int j=1 ; j<=n ; j++){
    int count = 0;
    for(int i=1 ; i<=j ; i++){
        if(j%i==0){
            count++;
        }
    }
    if(count==2){
    cout<<j<<" ";
   }
}
}