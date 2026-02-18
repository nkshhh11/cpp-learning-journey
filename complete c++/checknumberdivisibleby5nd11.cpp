#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout<<"enter the number : ";
    cin>>num;
    if(num%5==0){
        cout<<"number is divisible by 5 ";
    }
    else if(num%11==0){
        cout<<"number is devisible by 11 ";
    }
    else{
        cout<<"number is not devisible by anyone 5 or 11 ";
    }
}