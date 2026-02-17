#include<iostream>
using namespace std;
int main(){
    int n=1;
    
while(n<=5)
{
    int y = 1;
    while(y<=n)
    {
        cout<<"* ";
        y++;
    }
    cout<<endl;
    n++;
}
n =5;
while(n>=1)
{
    int y = 1;
    while(y<=n)
    {
        cout<<"* ";
        y++;
    }
    cout<<endl;
    n--;
}
return 0;
}