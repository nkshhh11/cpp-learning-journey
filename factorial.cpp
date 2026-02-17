<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main() {
   int n , fact = 1;
   cout<<"enter the factorial number : ";
   cin>>n;
   for(int i=n ; i>=1 ; i--)
   fact = fact*i;
   cout<<fact<<endl;
=======
#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cout<<"enter the number : ";
   cin>>n;
   int product = 1;
   for (int i = 1 ; i<=n ; i++){
     product *= i;
   }
   cout<<product;
>>>>>>> e6b763bcfb2bfa6c24188000aa001e80dfddf572
}