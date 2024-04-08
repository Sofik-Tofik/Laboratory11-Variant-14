#include <iostream>
using namespace std;

int main() {
    char* ptr_char;
    ptr_char = new char;
    *ptr_char = 'A';
    cout << "Value from allocated memory: " << *ptr_char << endl;
    delete ptr_char;
    return 0;
}