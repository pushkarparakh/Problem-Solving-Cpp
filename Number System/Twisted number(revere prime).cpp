#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int reverseNumber(int n) {
    int rev = 0;
    while (n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

bool isTwistedPrime(int n) {
    return isPrime(n) && isPrime(reverseNumber(n));
}

int main() {
    int num;
    cin >> num;
    cout << (isTwistedPrime(num) ? "Twisted Prime" : "Not Twisted Prime");
    return 0;
}