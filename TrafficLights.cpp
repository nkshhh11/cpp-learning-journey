#include <iostream>
 using namespace std;
 int main()
 {
    cout<<"enter signal:";
    string signal;
    cin>>signal;
    if(signal=="red")
    cout<<"stop";
    else if(signal=="yellow")
    cout<<"wait";
    else
    cout<<"go";
 }