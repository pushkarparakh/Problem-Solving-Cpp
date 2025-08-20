#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int square = n * n;
    if (sumOfDigits(square) == n)
        cout << n << " is a Neon number." << endl;
    else
        cout << n << " is NOT a Neon number." << endl;

    return 0;
}

