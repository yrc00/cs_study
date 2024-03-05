#include <iostream>
using std::cin;
using std::cout;

long long fibonacci(int n)
{
    long long fib[91];
    if(n == 0) return 0;
    else if(n==1) return 1;
    else{
        fib[0] = 0;
        fib[1] = 1;
        for(int i=2; i<=n; i++){
            fib[i] = fib[i-1] + fib[i-2];
        }
    }

    return fib[n];
}

int main()
{
    std::ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    cout << fibonacci(n);

    return 0;
}