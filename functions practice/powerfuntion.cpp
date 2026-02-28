// #include <bits/stdc++.h>
// using namespace std;

// int power(int base, int exp) {
//     int result = 1;
//     for(int i = 1; i <= exp; i++) {
//         result = result * base;
//     }
//     return result;
// }

// int main() {
//     int base, exp;
//     cout << "Enter base and exponent: ";
//     cin >> base >> exp;

//     cout << "Answer = " << power(base, exp);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int power(int a , int b){
    int result = 1;
    for(int i=1 ; i<=b ; i++){
        result = result * a;
    }
    return result;
}
int main(){
    int a , b;
    cout<<"enter the number : ";
    cin>>a;
    cout<<"enter the power : ";
    cin>>b;
    cout<<"answer is "<<power(a , b);
    return 0;
}