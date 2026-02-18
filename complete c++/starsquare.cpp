// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout<<"enter the size of square : ";
//     cin>>n;
//     for(int i=1 ; i<=n; i++){
//         for(int j=1 ; j<=n ; j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }






// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout<<"enter the size of square : ";
//     cin>>n;
//     for(int i=1 ; i<=n; i++){
//         for(int j=1 ; j<=n ; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout<<"enter the size of square : ";
//     cin>>n;
//     for(int i=1 ; i<=n; i++){
//         for(int j=1 ; j<=n ; j++){
//             cout<<" "<<(char)(j+64)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }






#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"enter the size of square : ";
    cin>>n;
    for(int i=1 ; i<=n; i++){
        for(int j=1 ; j<=n ; j++){
            cout<<" "<<(char)(i+64)<<" ";
        }
        cout<<endl;
    }
    return 0;
}