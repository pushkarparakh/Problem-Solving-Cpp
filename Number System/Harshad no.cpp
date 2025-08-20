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

    int sum = sumOfDigits(n);
    if (n % sum == 0)
        cout << n << " is a Harshad number." << endl;
    else
        cout << n << " is NOT a Harshad number." << endl;

    return 0;
}

