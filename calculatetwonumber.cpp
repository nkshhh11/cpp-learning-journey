// #include <bits/stdc++.h>
// using namespace std;
// int sum(int a , int b){
//     int s = a+b ;
//     return s;
// }
// int main() {
//     cout<<sum(9,3);
//     return 0;
// }


//min of two 
#include <iostream>
using namespace std;
int min(int a , int b){  // ye jo andr int likha hai inko parameter bolte hai 
    if(a<b){
        return a;
    } else {
        return b;
    }
}
int main() {
    cout<<min(5,8)<<endl; // or yha values ko ya valu lene ko argumnet
    return 0;
}