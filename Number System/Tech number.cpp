#include <iostream>
#include <cmath>
using namespace std;

bool isTech(int n) {
    int digits = 0;
    int temp = n;
    while (temp) {
        digits++;
        temp /= 10;
    }
    
    if (digits % 2 != 0) return false;
    
    int half = digits / 2;
    int divisor = pow(10, half);
    int first = n / divisor;
    int second = n % divisor;
    
    int sum = first + second;
    return sum * sum == n;
}

int main() {
    int num;
    cin >> num;
    cout << (isTech(num) ? "Tech Number" : "Not Tech Number");
    return 0;
}