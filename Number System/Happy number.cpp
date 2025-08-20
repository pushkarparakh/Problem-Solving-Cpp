#include <iostream>
using namespace std;

int sumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    while (n != 1 && n != 4)
        n = sumOfSquares(n);

    if (n == 1)
        cout << "Happy number" << endl;
    else
        cout << "Not a Happy number" << endl;

    return 0;
}

