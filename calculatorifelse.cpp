// #include<iostream>
// using namespace std ;
// int main(){
//     int x;
//     cin>>x;
//     char op;
//     cin>>op;
//     int y;
//     cin>>y;
//     if(op=='+')
//         cout<<x+y;
//     if(op=='-')
//         cout<<x-y;
//     if(op=='*')
//         cout<<x*y;
//     if(op=='/')
//         cout<<x/y;
// }



#include <iostream>
using namespace std;

int main() {
    int x;
    cout<<"enter first number : ";
    cin>>x;
    char op;
    cout<<"what operation you want ? : ";
    cin>>op;
    int y;
    cout<<"enter second number : ";
    cin>>y;
if (op=='+')
    cout<<x+y;
if (op=='/')
    cout<<x/y;
if (op=='*')
    cout<<x*y;
if (op=='-')
    cout<<x-y;
}