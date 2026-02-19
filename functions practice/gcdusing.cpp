#include <bits/stdc++.h>
using namespace std;
int gcd(int a ,int  b){
    if(b==0)
    return a;
else 
return gcd(b , a%b);
}
int main(){
    int a , b;
    cout<<"enter the first number : ";
    cin>>a;
    cout<<"enter the second number : ";
    cin>>b;
    cout<<"gcd is : "<<gcd(a , b);
}