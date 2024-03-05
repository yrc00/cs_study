// 피보나치 수 - 메모이제이션
#include <iostream>
using namespace std;

const int MAX = 100;
long long fib[MAX] = {0};

long long fibonacci(int n){
    if(n<=1) return n;
    if(fib[n]) return fib[n];
    else return fib[n] = fibonacci(n-1) + fibonacci(n-2);
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