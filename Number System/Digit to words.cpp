#include <iostream>
using namespace std;

void convertToWords(int n) {
    string words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    if (n == 0) {
        cout << words[0];
        return;
    }
    string result = "";
    while (n > 0) {
        int digit = n % 10;
        result = words[digit] + " " + result;
        n /= 10;
    }
    cout << result;
}

int main() {
    int num;
    cin >> num;
    convertToWords(num);
    return 0;
}