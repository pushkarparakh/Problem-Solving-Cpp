#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool areCoPrime(int a, int b) {
    return findGCD(a, b) == 1;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    
    if (areCoPrime(num1, num2)) {
        cout << "CoPrime" << endl;
    } else {
        cout << "Not CoPrime" << endl;
    }
    
    return 0;
}