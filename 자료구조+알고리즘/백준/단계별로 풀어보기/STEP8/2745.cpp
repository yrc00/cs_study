#include <iostream>
#include <string>
#include <cmath>
using std::string;
using std::cin;
using std::cout;

int main() {
    string num;
    int format;
    long long sum = 0;

    cin >> num >> format;

    int length = num.length();
    for (int i = 0; i < length; i++) {
        char c = num[i];
        int digit;
        if (c >= '0' && c <= '9') digit = c - '0';
        else digit = c - 'A' + 10;
        sum += digit * pow(format, length - i - 1);
    }

    cout << sum;
    return 0;
}