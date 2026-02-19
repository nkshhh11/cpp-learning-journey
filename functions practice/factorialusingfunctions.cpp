#include <bits/stdc++.h>
using namespace std;
int fact(int a){
    if(a==1)
    return 1;
else if(a==0)
return 0;
else 
return a*fact(a-1);
}
int main(){
    int a;
    cout<<"enter the number : ";
    cin>>a;
    cout<<"the factorial of a number is : ";
    cout<<fact(a);
}