#include <iostream>
using namespace std;

int main() {
    float length, breadth;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    float area = length * breadth;
    float perimeter = 2 * (length + breadth);

    if (area > perimeter) {
        cout << "Area is greater than Perimeter." << endl;
    }
    else if (area < perimeter) {
        cout << "Perimeter is greater than Area." << endl;
    }
    else {
        cout << "Area and Perimeter are equal." << endl;
    }

    return 0;
}
