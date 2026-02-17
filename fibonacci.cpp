#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cout<<"enter the number : ";
   cin>>n;
   int a=0 , b=1;
   for(int i=1 ; i<=n ; i++){
    cout<<a<<endl;
    int next = a+b;
    a=b;
    b=next;
   }
}