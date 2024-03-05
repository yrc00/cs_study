#include <iostream>
using std::cin;
using std::cout;


int main()
{
    int n;
    int fib[46];

    std::ios_base::sync_with_stdio(false);
    cin >> n;

    if(n==0)
        cout << "0";
    else if(n == 1)
        cout << "1";
    else{
        fib[0] = 0;
        fib[1] = 1;
        for(int i=2; i<=n ;i++){
            fib[i] = fib[i-1] + fib[i-2];
        }
        cout << fib[n];
    }

    return 0;
}