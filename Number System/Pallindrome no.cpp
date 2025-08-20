#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n == reverseNumber(n))
        cout << n << " is a Palindrome number." << endl;
    else
        cout << n << " is NOT a Palindrome number." << endl;

    return 0;
}

