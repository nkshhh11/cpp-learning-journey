// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int a ;
//     cout<<"enter a : ";
//     cin>>a;
//     for(int i = 1 ; i<=a ; i++){
//         for(int j = 1 ; j<=a-i; j++){  
//             cout<<"# ";
//         }
//             for(int j = 1 ; j<=i; j++){  
//             cout<<"* ";
//             }
//         cout<<endl;
//     }
// }



// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int a ;
//     cout<<"enter a : ";
//     cin>>a;
//     for(int i = 1 ; i<=a ; i++){
//         for(int j = 1 ; j<=a-i; j++){  
//             cout<<"  ";
//         }
//             for(int j = 1 ; j<=i; j++){  
//             cout<<"* ";
//             }
//         cout<<endl;
//     }
// }




// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int a ;
//     cout<<"enter a : ";
//     cin>>a;
//     for(int i = 1 ; i<=a ; i++){
//         for(int j = 1 ; j<=a-i; j++){  
//             cout<<"  ";
//         }
//             for(int j = 1 ; j<=i; j++){  
//             cout<<j<<" ";
//             }
//         cout<<endl;
//     }
// }





#include <bits/stdc++.h>
using namespace std;
int main() {
    int a ;
    cout<<"enter a : ";
    cin>>a;
    for(int i = 1 ; i<=a ; i++){
        for(int j = 1 ; j<=a-i; j++){  
            cout<<"  ";
        }
            for(int j = 1 ; j<=i; j++){  
            cout<<(char)(j+64)<<" ";
            }
        cout<<endl;
    }
}