<<<<<<< HEAD
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
=======
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
>>>>>>> e6b763bcfb2bfa6c24188000aa001e80dfddf572
}