#include <bits/stdc++.h>
using namespace std;
void table(int a ){
for(int i=1 ; i<=10 ; i++){
    cout<<a<<" "<<"X"<<" "<<i<<" "<<"="<<a*i<<endl;
}
}
int main(){
    int a;
    cout<<"enter the number which you want to write the table : ";
    cin>>a;
    table(a);
    return 0;
}