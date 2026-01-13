#include <iostream>
using namespace std;

int main() {
    float basic, da, hra, gross, pf, netSalary;

    cout << "Enter basic salary of employee: ";
    cin >> basic;

    // Allowances
    da = 0.25 * basic;  // 25% of basic
    hra = 0.15 * basic; // 15% of basic

    // Gross salary before deduction
    gross = basic + da + hra;

    // Provident fund (deduction)
    pf = 0.10 * gross; // 10% of gross salary

    // Net salary after PF deduction
    netSalary = gross - pf;

    cout << "\n------ Salary Details ------" << endl;
    cout << "Basic Salary      : " << basic << endl;
    cout << "DA (25%)          : " << da << endl;
    cout << "HRA (15%)         : " << hra << endl;
    cout << "Gross Salary      : " << gross << endl;
    cout << "Provident Fund(10%): " << pf << endl;
    cout << "-----------------------------" << endl;
    cout << "Net Salary         : " << netSalary << endl;

    return 0;
}
