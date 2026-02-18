// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    int a;
//    cout<<"enter the length of full pyramid : ";
//    cin>>a;
//    for(int i=1 ; i<=a ; i++){
//     for(int j=1 ; j<=a - i ; j++){
//         cout<<" ";
//         }
//         for(int k=1 ; k<=2*i-1 ; k++){
//         cout<<i;
//     }
//     cout<<endl;
//    }
// }








#include <bits/stdc++.h>
using namespace std;

int main() {
   int a;
   cout<<"enter the length of full pyramid : ";
   cin>>a;
   for(int i=1 ; i<=a ; i++){
    for(int j=1 ; j<=a - i ; j++){
        cout<<" ";
        }
        for(int k=1 ; k<=i ; k++){
        cout<<"* ";
    }
    cout<<endl;
   }
}