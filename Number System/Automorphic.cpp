#include <iostream>
#include <cmath>
using namespace std;

class Automorphic {
public:
    int n;
    Automorphic() {
        cout << "Enter the number:" << endl;
        cin >> n;
    }

    void check() {
        int sq = n * n;
        int temp = n;
        int d = 1;

        while (temp > 0) {
            d *= 10;
            temp /= 10;
        }

        if (sq % d == n)
            cout << "Automorphic number" << endl;
        else
            cout << "Not an Automorphic number" << endl;
    }
};

int main() {
    Automorphic a;
    a.check();
    return 0;
}

