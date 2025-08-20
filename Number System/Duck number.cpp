#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int temp = n;
    bool isDuck = false;

    while (temp > 0) {
        if (temp % 10 == 0) {
            isDuck = true;
            break;
        }
        temp /= 10;
    }

    if (isDuck)
        cout << n << " is a Duck number." << endl;
    else
        cout << n << " is NOT a Duck number." << endl;

    return 0;
}

