#include <bits/stdc++.h>
using namespace std;
int radius(int r){
    float pi=3.14;
    return pi*r*r;
}
int main(){
    int r;
    cout<<"enter the redius of the circle : ";
    cin>>r;
    cout<<"we take the value of pi is 3.14"<<endl;
    cout<<"so the area of circle is : ";
    cout<<radius(r);
}