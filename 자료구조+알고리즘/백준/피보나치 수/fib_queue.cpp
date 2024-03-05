// 피보나치 수 - 큐로 구현
#include <iostream>
#include <queue>
using namespace std;

int fibonacci(int n){
    queue<int> q;
    
    if(n<=0) return 0;
    else if(n==1) return 1;

    q.push(0);
    q.push(1);

    int fib;
    for(int i=2; i<=n; i++){
        int first = q.front();
        q.pop();
        int second = q.front();
        q.pop();

        fib = first + second;
        q.push(second);
        q.push(fib);
    }
    
    return fib;
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