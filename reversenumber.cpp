// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    int n , reverse = 0 , digit;
//    cout<<"enter a number : ";
//    cin>>n;
//    for(int i=n ; i>0 ; i=i/10){
//     digit = i%10;
//     reverse = reverse *10 + digit;
// }
//     cout<<reverse;
// }




#include <bits/stdc++.h>
using namespace std;

int main() {
    int a , reverse = 0 , digit;
    cout<< "enter the digit : ";
    cin>>a;
    for(int i = a ; i>0 ; i= i/10){
        digit=i%10;
        reverse = reverse * 10+digit;
    }
    cout<<reverse;
}