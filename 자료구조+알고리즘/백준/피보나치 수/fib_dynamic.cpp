// 피보나치 수 - 동적 프로그래밍
#include <iostream>
using namespace std;

int fibonacci(int n){
    int fib[n+2];
    fib[0] = 0;
    fib[1] = 1;
    for(int i=2; i<=n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[n];
}

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Sequence: ";
    for(int i=0; i<n; i++){
        cout << fibonacci(i) << " ";
    }
    return 0;
}