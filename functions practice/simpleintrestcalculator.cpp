#include <bits/stdc++.h>
using namespace std;

float interest(float principal, float rate, float time){
    return (principal * rate * time) / 100;
}

int main(){
    float principal, rate, time;

    cout << "Enter the principal value: ";
    cin >> principal;

    cout << "Enter the rate in percent: ";
    cin >> rate;

    cout << "Enter the time: ";
    cin >> time;

    float si = interest(principal, rate, time);

    cout << "The simple interest is: " << si << endl;
    cout << "Total amount is: " << principal + si << endl;

    return 0;
}