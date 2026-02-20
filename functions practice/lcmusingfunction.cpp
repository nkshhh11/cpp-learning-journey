// #include <bits/stdc++.h>
// using namespace std;
// int gcd(int a , int b){
//     if(b==0)
//     return a;
// else 
// return gcd(b , a%b);
// }
// int lcm(int a , int b){
//     return a*b/gcd(a , b);
// }
// int main(){
//     int a , b;
//     cout<<"enter the first number : ";
//     cin>>a;
//     cout<<"enter the second number : ";
//     cin>>b;
//     cout<<"the lcm of both number is : "<<lcm(a , b);
// }










////without using gcd function
#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b){
    int maxNum = max(a, b);

    while(true){
        if(maxNum % a == 0 && maxNum % b == 0){
            return maxNum;
        }
        maxNum++;
    }
}

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "LCM is: " << lcm(a, b);

    return 0;
}