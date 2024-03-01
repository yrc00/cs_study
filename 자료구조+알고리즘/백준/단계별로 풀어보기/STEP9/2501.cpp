#include <iostream>
int main()
{
    int n, k, idx=0;
    int answer[10000];
    std::cin >> n >> k;

    for(int i=1; i<=n; i++){
        if(n%i==0) answer[idx++] = i;
    }

    std::cout << answer[k-1];

    return 0;
}