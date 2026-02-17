#include <bits/stdc++.h>
using namespace std;

int main() {
   int n , fact = 1;
   cout<<"enter the factorial number : ";
   cin>>n;
   for(int i=n ; i>=1 ; i--)
   fact = fact*i;
   cout<<fact<<endl;
}