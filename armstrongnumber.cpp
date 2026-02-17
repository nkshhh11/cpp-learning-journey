#include <bits/stdc++.h>
using namespace std;

int main() {
   int n , original , digit , count=0 , sum=0;
   cout<<"enter the number : ";
   cin>>n;
   original = n;
   for(int i = n ; i>0 ; i=i/10){
   count++;
}
for(int i=n ; i>0 ; i=i/10){
digit = i%10;
sum = sum + pow(digit , count);
}
if(original == sum)
cout<<"number is armstrong";
else
cout<<"number is not armstorng";
}