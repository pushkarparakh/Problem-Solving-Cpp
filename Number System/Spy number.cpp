#include <iostream>
using namespace std;

bool isSpy(int n) {
    int sum = 0;
    int product = 1;
    while (n) {
        int digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
    }
    return sum == product;
}

int main() {
    int num;
    cin >> num;
    cout << (isSpy(num) ? "Spy Number" : "Not Spy Number");
    return 0;
}