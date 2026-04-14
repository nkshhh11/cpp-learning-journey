

#include <bits/stdc++.h>
using namespace std;
void swap(int a , int b ){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main() {
   int a , b;
   cout<<"enter the number : ";
   cin>>a;
   cin>>b;
   swap(a,b);
 cout<<"the swapped numebrs are : ";
   cout<<"after swapp : "<<a<<" "<<b;
   return 0;
}