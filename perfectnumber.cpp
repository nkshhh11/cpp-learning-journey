#include <bits/stdc++.h>
using namespace std;

int main() {
   int n , sum=0;
   cout<<"enter the  number : ";
   cin>>n;
   for(int i=1 ; i<n ; i++){
   if(n%i==0){
    sum = sum+i;
   }
}
if(sum==n)
cout<<"perfect number";
else
cout<<"not perfect";

}