#include <iostream>
#include <cmath>
using namespace std;

bool isPronic(int n) {
    for (int i = 0; i <= sqrt(n); i++)
        if (i * (i + 1) == n)
            return true;
    return false;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPronic(n))
        cout << n << " is a Pronic number." << endl;
    else
        cout << n << " is NOT a Pronic number." << endl;

    return 0;
}

