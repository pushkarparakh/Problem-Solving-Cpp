#include <iostream>
#include <cmath>
using namespace std;

bool isDisarium(int n) {
    int temp = n;
    int digits = 0;
    while (temp) {
        digits++;
        temp /= 10;
    }
    
    temp = n;
    int sum = 0;
    int pos = digits;
    
    while (temp) {
        int digit = temp % 10;
        sum += pow(digit, pos);
        temp /= 10;
        pos--;
    }
    
    return sum == n;
}

int main() {
    int num;
    cin >> num;
    cout << (isDisarium(num) ? "Disarium Number" : "Not Disarium Number");
    return 0;
}