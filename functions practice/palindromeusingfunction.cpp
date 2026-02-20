#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(int a){
    int original=a;
    int reverse=0;
    while(a>0){
        int digit=a%10;
        reverse=reverse*10+digit;
        a=a/10;
    }
    if(original==reverse)
        return true;
    else 
    return false;
}
int main(){
    int num;
    cout<<"enter the number which you want to check it is palindrome or not : ";
    cin>>num;
    if(ispalindrome(num))
    cout<<"palindorme";
else 
cout<<"not palindrome";
}