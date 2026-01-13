#include <iostream>
using namespace std;

int main() 
{
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;

    cout << "Numbers before swapping: " << a << " " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Numbers after swapping: " << a << " " << b << endl;

    return 0;
}
