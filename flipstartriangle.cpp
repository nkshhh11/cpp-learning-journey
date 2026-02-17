// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a ;
//     cout<<"enter a : ";
//     cin>>a;
//     for(int i = 1 ; i<=a ; i++){
//         for(int j = 1 ; j<=a-i+1; j++){  
//      //logic = a yani jo input hai usme se jo i jo a
//      //hi hai usme plus 1 karke ghatoge to
//      //reverse me jayega same wahi concept hai
//             cout<<" * ";
//         }
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
//         for(int j = 1 ; j<=a-i+1; j++){  
//             cout<<j<<" ";
//         }
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
//         for(int j = 1 ; j<=a-i+1; j++){  
//             cout<<i<<" ";
//         }
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
//         for(int j = 1 ; j<=a-i+1; j++){  
//               cout<<(char)(64+i)<<" ";
//         }
//         cout<<endl;
//     }
//}




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a ;
//     cout<<"enter a : ";
//     cin>>a;
//     for(int i = 1 ; i<=a ; i++){
//         for(int j = 1 ; j<=a-i+1; j++){  
//               cout<<(char)(64+j)<<" ";
//         }
//         cout<<endl;
//     }
// }




#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout<<"enter the number : ";
    cin>>a;
    for(int i=1 ; i<=a ; i++){
        for(int j=1 ; j<=i ; j++){
            cout<<(char)(64+j)<<" ";
        }
        cout<<endl;
    }
}