
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a ;
//     cout<<"enter a : ";
//     cin>>a;
//     int b = 1;
//     for(int i = 1 ; i<=a ; i++){
//         for(int j = 1 ; j<=i; j++){  
//               cout<<b<<" ";
//               b++;
//         }
//         cout<<endl;
//     }
// }


















#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout<<"enter the number what you want the length of floyed triangle : ";
    cin>>a;
    int b=1;
    for(int i=1 ; i<=a ; i++){
        for(int j=1 ; j<=i ; j++){
            cout<<b<<" ";
            b++;
        }
        cout<<endl;
    }
}