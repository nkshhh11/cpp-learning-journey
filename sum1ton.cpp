// #include <bits/stdc++.h>
// using namespace std;
// int sum(int n ){
//     int c = 0;
//     for(int i=1 ; i<=n ; i++){
//     c+=i;
// }
// return c;
// }
// int main() {
//     cout<<sum(8);
   
// }

#include <iostream>
using namespace std;
void fib(int n) {
    int a = 0, b = 1, c;
    cout << a << " " << b << " ";
    for(int i = 3; i <= n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}
int main() {
    fib(6);
}