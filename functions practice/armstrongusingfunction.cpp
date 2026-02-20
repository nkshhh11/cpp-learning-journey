#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){
    int original = n;
    int sum = 0;
    int count = 0;
    int temp = n;
    while(temp > 0){
        temp = temp / 10;
        count++;
    }
    temp = n;
    while(temp > 0){
        int digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }
    return (sum == original);
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(isArmstrong(num))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}