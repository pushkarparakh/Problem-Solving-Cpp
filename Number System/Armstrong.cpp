#include <iostream>
#include <cmath>
using namespace std;

class Armstrong {
public:
    int n;
    Armstrong() {
        cout << "Enter the number:" << endl;
        cin >> n;
    }
    
    void container() {
        int temp = n;  
        int digit, sum = 0, count = 0;
        
      
        while(temp != 0) {
            temp = temp / 10;
            count++;
        }
        cout << "Total number of digits are: " << count << endl;
        
        temp = n; 
        while(temp != 0) {
            digit = temp % 10;
            cout << digit << endl;
            sum = sum + pow(digit, count);
            temp = temp / 10;
        }
        
        if(sum == n)
            cout << "Armstrong number" << endl;
        else
            cout << "Not an Armstrong number" << endl;
    }
};

int main() {
    Armstrong a;
    a.container();
    return 0;
}
