#include <bits/stdc++.h>
using namespace std;

int main() {
   int a ;
   cout<<"enter the number : ";
   cin>>a;
   for(int i = 1; i<=a ; i++){
        for(int j = 1; j<=i; j++){
            cout<<2*j-1<<" ";
        }
        cout<<endl;
   }
}