#include <iostream>

int sqrt(int n)
{
    for(int i=0; i<n; i++){
        if(i*i==n) return i;
    }
}

int main()
{
    long long int n;
    std::cin >> n;
    std::cout << sqrt(n);
    return 0;
}