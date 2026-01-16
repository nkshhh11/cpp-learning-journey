#include <bits/stdc++.h>
using namespace std;
int main() {
   int x ;
   cout<<"enter the numbre : ";
   cin>>x;
   int sum = 0;
   while(x!=0){
    int ld = x%10;
    x = x/10;
    sum += ld;
   }
   cout<<sum;
}