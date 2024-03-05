#include <iostream>
using std::cin;
using std::cout;

long long fib[1500050];
int INF = 1000000;

void fibonacci(int n){
    a[0] = 0;
    a[1] = 1;
    for(int i=0; i<1500000; i++){
        a[i+2] = (fib[i+1] + fib[i]) % INF;
    }
}

int main()
{
    long long n;
    cin >> n;
    fibonacci();
    cout << fib[n%1500000];
    return 0;
}