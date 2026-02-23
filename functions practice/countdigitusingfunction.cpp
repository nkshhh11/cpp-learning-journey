#include <bits/stdc++.h>
using namespace std;
int count(int a){
    int total = 0;
    for(int i=a ; i!=0 ; i=i/10)
    total++;
    return total;
}
int main(){
    int a;
    cout<<"enter the number : ";
    cin>>a;
    cout<<"the total number of digit in particular number is : ";
    cout<<count(a);
}