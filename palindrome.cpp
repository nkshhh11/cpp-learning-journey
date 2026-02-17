#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , original , reverse = 0 , digit ;
    cout<<"enter the number : ";
    cin>>n;
    original=n;
    for(int i=n ; i>0 ; i=i/10){
        digit=i%10;
        reverse = reverse * 10 + digit;
    }
    if(original == reverse)
    cout<<"palindrome";
else
cout<<"not palindrome";
}