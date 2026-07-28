// #include<iostream>
// using namespace std;
// int main(){
//    int n = 1;
//     while(n<=10)
//     {
//         cout<<n<<" ";
//         n++;
//     }
// }





// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    int n;
//    cin>>n;
//    int dup=n;
//    int sum=0;
//    int ld;
//    while(n>0){
//     ld=n%10;
//     sum=sum+(ld*ld*ld);
//     n=n/10;

//    }
//    if(sum==dup)
//    cout<<"true";
// else 
// cout<<"false";
// }




#include <bits/stdc++.h>
using namespace std;
void arm(int n){
    int sum=0;
    int dup=n;
    int ld;
while(n>0){
    ld=n%10;
    sum=sum+(ld*ld*ld);
    n=n/10;
}
    if(sum==dup)
    cout<<"true";
else 
cout<<"false";
}
int main() {
  int n;
  cin>>n;
 arm(n);
}