// #include<iostream>
// using namespace std;
// void numbers(int x,int y){
//     cout<<x+y;
// }
// int main(){
//     int x,y;
//     cout<<"enter first number : ";
//     cin>>x;
//     cout<<"enter the sencond number : ";
//     cin>>y;
//     numbers(x,y);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int pow(int a,int b){
// if(b==0)
//  return 1;
// else
//     return a*pow(a,b-1);
// }
// int main(){
//     int x,y;
//     cin>>x>>y;
//     cout<<"power is "<<pow(x,y);
//     return 0;
// }

#include<iostream>
using namespace std;
int sum(int x){
    if (x==0)
    return 0;
else
    return (x%10)+sum(x/10);
}
int main(){
    int x ;
    cout<<"enter the digit : ";
    cin>>x;
    cout<<"the sum is : "<<sum(x);
    return 0;
}