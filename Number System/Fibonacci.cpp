#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, c;
    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    cout << endl;
    return 0;
}

