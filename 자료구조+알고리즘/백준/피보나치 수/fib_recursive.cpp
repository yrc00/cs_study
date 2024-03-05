// 피보나치 수 - 재귀함수 구현
#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n <= 1) return n;
    else return fibonacci(n-1) + fibonacci(n-2);
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