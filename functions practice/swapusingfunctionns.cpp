// #include <bits/stdc++.h>
// using namespace std;
// void swap(int &a , int &b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//     int a , b;
//     cout<<"enter first number : ";
//     cin>>a;
//     cout<<"enter the second number : ";
//     cin>>b;
//     swap(a , b);
//     cout<<"swapped number is : "<<endl;
//     cout<<a<<endl;
//     cout<<b<<endl;
// }





//call by value
#include <iostream>
using namespace std;

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "Inside function : " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    swap(a, b);

    cout << "after swap : " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
