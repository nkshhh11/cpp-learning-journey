#include <bits/stdc++.h>
using namespace std;
int fib(int a){
    if(a==0)
    return 0;
else if(a==1)
return 1;
else 
return fib(a-1) + fib(a-2);
}
int main(){
    int a;
    cout<<"enter the number : ";
    cin>>a;
    for(int i=1 ; i<=a ; i++)
    cout<<fib(i)<<" ";
}