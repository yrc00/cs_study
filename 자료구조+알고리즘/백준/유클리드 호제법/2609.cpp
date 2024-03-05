#include <iostream>
using std::cin;
using std::cout;

int gcd(int a, int b){
    while(b>0){
        int tmp = a;
        a = b;
        b = tmp%b;
    }
    return a;
}

int lcm(int a, int b){
    return a*b / gcd(a, b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << "\n";
    cout << lcm(a, b);

    return 0;
}