#include <bits/stdc++.h>
using namespace std;

int main() {
    int marks ;
    cout<<"enter marks : ";
    cin>>marks;
    if(marks>=90 && marks<=100){
        cout<<"grade A";
    }
    else if(marks>=80 && marks<=90){
        cout<<"grade B";
    }
else if(marks>=70 && marks<=80){
    cout<<"grade C";
}
else{
    cout<<"FAIL";
}
}