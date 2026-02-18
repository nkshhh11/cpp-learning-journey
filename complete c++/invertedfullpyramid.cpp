// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int a;
//   cout<<"enter the length of inverted pyramid : ";
//   cin>>a;
//   for(int i=1 ; i<=a ; i++){
//     for(int j=1 ; j<=i-1 ;j++){
//         cout<<" ";
//     }
//     for(int k=1 ; k<=a-i+1 ; k++){
//         cout<<"* ";
//     }
//     cout<<endl;
//   }
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int a;
//   cout<<"enter the length of inverted pyramid : ";
//   cin>>a;
//   for(int i=1 ; i<=a ; i++){
//     for(int j=1 ; j<=i-1 ;j++){
//         cout<<" ";
//     }
//     for(int k=1 ; k<=a-i+1 ; k++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//   }
// }





#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cout<<"enter the length of inverted pyramid : ";
  cin>>a;
  for(int i=1 ; i<=a ; i++){
    for(int j=1 ; j<=i-1 ;j++){
        cout<<" ";
    }
    for(int k=1 ; k<=a-i+1 ; k++){
        cout<<(char)(i+64)<<" ";
    }
    cout<<endl;
  }
}
