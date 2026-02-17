#include <bits/stdc++.h>
using namespace std;

int main() {
   int n , sum=0 , digit;
   cout<<"enter the number : ";
   cin>>n;
   for(int i=n ; i>0 ; i=i/10){
   digit=i%10;
sum=sum+digit;
   }
cout<<sum;
}