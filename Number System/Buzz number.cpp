#include <iostream>
using namespace std;

class Buzz {
public:
    int n;
    Buzz() {
        cout << "Enter the number:" << endl;
        cin >> n;
    }

    void check() {
        if (n % 10 == 7 || n % 7 == 0)
            cout << "Buzz number" << endl;
        else
            cout << "Not a Buzz number" << endl;
    }
};

int main() {
    Buzz b;
    b.check();
    return 0;
}

