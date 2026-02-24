#include <bits/stdc++.h>
using namespace std;
int checkperfect(int a){
    int sum=0;
    for(int i=1 ; i<=a/2; i++){
        if(a%i==0){
        sum=sum+i;
        }
    }
    return sum;
}
int main(){
    int num;
    cout<<"enter the number : ";
    cin>>num;
    if(checkperfect(num)==num){
        cout<<"perfect number ";
    }
        else{
        cout<<"not perfect";
        }
}