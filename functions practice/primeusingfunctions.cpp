#include <bits/stdc++.h>
using namespace std;
   bool prime(int a){
    if(a<=1) return false;
    for (int i=2 ; i<a ; i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
   }
int main(){
    int a;
    cout<<"enter the number : ";
    cin>>a;
    if(prime(a))
    cout<<"prime number";
else 
cout<<"not prime";
}