//첫째 줄에 N과 X가 주어진다. (1 ≤ N, X ≤ 10,000)
//둘째 줄에 수열 A를 이루는 정수 N개가 주어진다. 주어지는 정수는 모두 1보다 크거나 같고, 10,000보다 작거나 같은 정수이다.

#include <iostream>
int main()
{
    int n, x;
    int num[10000];
    
    std::ios_base::sync_with_stdio(false);
    std::cin >> n >> x;
    for(int i=0; i<n; i++)
        std::cin >> num[i];
    
    for(int i=0; i<n; i++){
        if(num[i] < x)
            std::cout << num[i] << " ";
    }
    return 0;
}