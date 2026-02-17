#include <bits/stdc++.h>
using namespace std;

int main() {
   int n , count = 0;
   cout<<"enter the number : ";
   cin>>n;
   for(int i=n; i>0 ; i=i/10)
   count++;
    cout<<count;
}