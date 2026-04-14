// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     int b;
//     cin>>a;
//     cin>>b;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<a<<endl<<b;
// }

//swap progrm without using third variable 

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    int a , b;
//    cout<<"enter the numbers : ";
//    cin>>a;
//    cin>>b;
//    a=a+b;
//    b=a-b;
//    a=a-b;
//    cout<<"the swapped numbers are : "<<a<<" "<<b;
//    return 0;
// }


//swap program using third varialble 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cout<<"enter the number : ";
    cin>>a;
    cin>>b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"the swapped number are : "<<a<<" "<<b;
    return 0;
}