#include <iostream>
using namespace std;

int main() {
    float a, b;
    cout << "Enter the value of variable a: ";
    cin >> a;
    cout << "Enter the value of variable b: ";
    cin >> b;

    float* ptr_a = &a;
    float* ptr_b = &b;

    *ptr_a *= 3;
    *ptr_b /= 3;

    cout << "Updated value of a: " << a << endl;
    cout << "Updated value of b: " << b << endl;

    return 0;
}