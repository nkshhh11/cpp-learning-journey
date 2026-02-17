#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    char op;
    int b;
    cout<<"enter the first number : ";
    cin>>a;
    cout<<"enter the operator : ";
    cin>>op;
    cout<<"enter the second number : ";
    cin>>b;
    switch(op){
    case '+':
    cout<<a+b;
    break;
    case '-':
    cout<<a-b;
    break;
    case '*':
    cout<<a*b;
    break;
    case '/':
    cout<<a/b;
    break;
    default :
    cout<<"operator is wrong ";
    }
    return 0;
}