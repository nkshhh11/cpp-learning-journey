// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int year;
//     cout<<"enter a leap year : ";
//     cin>>year;
//     if((year%4==0 && year%100 != 0 ) || (year%400==0))
//     cout<<"entered year is leap yaer ";
// else 
// cout<<"entered year is not leap year ";
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year : ";
    cin>>year;
    if((year % 4==0 && year % 100 !=0) || (year%400==0))
    cout<<"entered year is leap year";
else
    cout<<"entered year is not leap year";
}