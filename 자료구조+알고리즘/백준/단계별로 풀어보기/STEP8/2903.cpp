#include <iostream>
#include <cmath>
int main()
{
    int t, n, sum=4;
    std::cin >> t;
    
    for(int i=1; i<=t ;i++){
        n = pow(2, i-1);
        sum += (3*n+1)*n + n;
    }

    std::cout << sum;

    return 0;
}