#include <bits/stdc++.h>
using namespace std;

int main() {
 int n;
 cout<<"enter the number : ";
 cin>>n;
 float sum=0;
 for(int i=1 ; i<=n ; i++){
 sum=sum+1.0/i;
}
cout<<"sum is = "<<sum;
    return 0;
}