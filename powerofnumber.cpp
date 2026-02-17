#include <bits/stdc++.h>
using namespace std;

int main() {
  int a , b , result=1;
  cout<<"enter the number : ";
  cin>>a;
  cout<<"enter the power : ";
  cin>>b;
  for(int i=1 ; i<=b ; i++){
  result =result*a;
  }
cout<<result;
}