#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    cout<<"enter the character : ";
    cin>>ch;
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
         ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            cout<<"it is a vowel";
         }
            else{
            cout<<"it is consonant";
         }
    }
    else{
    cout<<"it is invalid";
    }
}