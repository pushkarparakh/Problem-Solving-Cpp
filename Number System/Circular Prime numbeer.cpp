#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return false;
    return true;
}

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

int rotate(int num) {
    int rem = num % 10;
    int div = num / 10;
    int d = countDigits(div);
    return rem * pow(10, d) + div;
}

class CircularPrime {
public:
    int n;
    CircularPrime() {
        cout << "Enter the number:" << endl;
        cin >> n;
    }

    void check() {
        int temp = n;
        int d = countDigits(temp);
        bool flag = true;

        for (int i = 0; i < d; i++) {
            if (!isPrime(temp)) {
                flag = false;
                break;
            }
            temp = rotate(temp);
        }

        if (flag)
            cout << "Circular Prime number" << endl;
        else
            cout << "Not a Circular Prime number" << endl;
    }
};

int main() {
    CircularPrime cp;
    cp.check();
    return 0;
}

