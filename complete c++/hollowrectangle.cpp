#include <bits/stdc++.h>
using namespace std;

int main() {
   int a;
   cout<<"enter the hollow rectangle length : ";
   cin>>a;
   int b;
   cout<<"enter the hollow square rectangle bridth : ";
   cin>>b;
   for(int i=1 ; i<=a ; i++){
    for(int j=1 ; j<=b ; j++){
        if(i==1 || i==a || j==1 || j==b)
            cout<<"*";
            else
                cout<<" ";
    }
    cout<<endl;
   }
}