#include <iostream>
using namespace std;

int count_Occurrences(int* x, int n, int* y, int m) {
    int count = 0;
    for (int i = 0; i <= n - m; ++i) {
        bool found = true;
        for (int j = 0; j < m; ++j) {
            if (x[i + j] != y[j]) {
                found = false;
                break;
            }
        }
        if (found)
            count++;
    }
    return count;
}

int main() {
    int n, m;
    cout << "Enter the size of the first array (n): ";
    cin >> n;
    cout << "Enter the size of the second array (m): ";
    cin >> m;

    int* x = new int[n];
    int* y = new int[m];

    cout << "Enter elements of the first array:\n";
    for (int i = 0; i < n; ++i) {
        cout << "x[" << i << "]: ";
        cin >> x[i];
    }

    cout << "Enter elements of the second array:\n";
    for (int i = 0; i < m; ++i) {
        cout << "y[" << i << "]: ";
        cin >> y[i];
    }

    int occurrences = count_Occurrences(x, n, y, m);
    cout << "Number of times the second array occurs in the first array: " << occurrences << endl;

    delete[] x;
    delete[] y;

    return 0;
}