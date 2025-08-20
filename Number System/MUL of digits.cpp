#include <iostream>
using namespace std;

int multiplyDigits(int n) {
    int product = 1;
    while (n > 0) {
        product *= n % 10;
        n /= 10;
    }
    return product;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Product of digits: " << multiplyDigits(n) << endl;
    return 0;
}

