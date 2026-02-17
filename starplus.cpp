// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a;
//     cout<<"enter the number : ";
//     cin>>a;
//     int mid = a/2+1;
//     for(int i = 1 ; i<=a ; i++){
//         for(int j = 1 ; j<=a ; j++){
//             if(i==mid || j==mid)
//             cout<<"*"<<" ";
//         else 
//         cout<<"#"<<" ";
//         }
//         cout<<endl;
//     }
// }


//jab n given 5 hoga tabhi star ka plus 
//banega 


#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout<<"enter the number : ";
    cin>>a;
    int mid = a/2+1;
    for(int i = 1 ; i<=a ; i++){
        for(int j = 1 ; j<=a ; j++){
            if(i==mid || j==mid)
            cout<<"*"<<" ";
        else 
        cout<<" "<<" ";
        }
        cout<<endl;
    }
}