#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cout<<"enter a number : ";
    cin>>x;
    int a = 3;   //starting kha se karni hai 
    for(int i=1 ; i<=x; i++){
        cout<<a<<" ";
        a = a * 4; //kitne ka gap hai 
    }
    return 0;
}