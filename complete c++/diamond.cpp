#include <bits/stdc++.h>
using namespace std;

int main() {
   int a;
   cout<<"enter the length of diamond : ";
   cin>>a;
   for(int i=1 ; i<=a ; i++){
    for(int j=1 ; j<=a-i ; j++){
        cout<<" ";
    }
    for(int k=1 ; k <=2*i-1; k++){
        cout<<"*";
    }
    cout<<endl;
}
    for(int l=a-1 ; l>=1 ; l--){
    for(int m=1 ; m<=a-l ; m++){
        cout<<" ";
    }
    for(int n=1 ; n<=2*l-1 ; n++){
        cout<<"*";
    }
    cout<<endl;
}
}



//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *