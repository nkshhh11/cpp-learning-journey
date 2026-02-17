// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    int a;
//    cout<<"enter the number : ";
//    cin>>a;
//    int even=0 , odd=0;
//    while(a>0){
//    int digit =a%10;
// if(digit%2==0)
// even++;
// else 
// odd++;
// a = a/10;
//    }
// cout<<"even number is : "<<even<<endl;
// cout<<"odd number is : "<<odd<<endl;

// }





#include <bits/stdc++.h>
using namespace std;

int main() {
   int a;
   cout<<"enter the number : ";
   cin>>a;
   int even=0 , odd=0;
   while(a>0){
      int digit =a%10;
      if(digit%2==0)
      even++;
   else
   odd++;
      a=a/10;
   }
cout<<"even number is : "<<even<<endl;
cout<<"odd number is : "<<odd<<endl;
}