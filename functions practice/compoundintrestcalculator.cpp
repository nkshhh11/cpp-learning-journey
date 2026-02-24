#include <iostream>
#include <cmath>
using namespace std;
double calculateAmount(double principal, double rate, double time) {
    return principal * pow((1 + rate / 100), time);
}
double calculateCI(double principal, double rate, double time) {
    double amount = calculateAmount(principal, rate, time);
    return amount - principal;
}
int main() {
    double principal, rate, time;

    cout << "Enter Principal Amount: ";
    cin >> principal;

    cout << "Enter Rate of Interest (% per year): ";
    cin >> rate;

    cout << "Enter Time (in years): ";
    cin >> time;

    double amount = calculateAmount(principal, rate, time);
    double compoundInterest = calculateCI(principal, rate, time);

    cout << "\nCompound Interest = " << compoundInterest << endl;
    cout << "Total Amount = " << amount << endl;

    return 0;
}





