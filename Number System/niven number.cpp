#include <iostream>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool isNiven(int n) {
    int sum = digitSum(n);
    return n % sum == 0;
}

int main() {
    int num;
    cin >> num;
    
    if (isNiven(num)) {
        cout << "Niven Number";
    } else {
        cout << "Not Niven Number";
    }
    
    return 0;
}