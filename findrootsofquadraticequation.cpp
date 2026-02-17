#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
   int a , b , c;
   cout<<"enter first number : ";
   cin>>a;
   cout<<"enter seconf number : ";
   cin>>b;
   cout<<"enter third number : ";
   cin>>c;

   float D = b*b-4*a*c;
   cout<<"discriminant = "<<D<<endl;
   if(D>=0){
   double x1 = (-b + sqrt(D))/(2*a);
   double x2 = (-b - sqrt(D))/(2*a);
   cout<<"root 1 = "<<x1<<endl;
   cout<<"root 2 = "<<x2<<endl;
   }
   else{
   cout<<"roots are imaginary"<<endl;
   }
    return 0;
}