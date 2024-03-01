//첫 줄에 테스트케이스의 개수 T가 주어진다. T는 최대 1,000,000이다. 다음 T줄에는 각각 두 정수 A와 B가 주어진다. 
// A와 B는 1 이상, 1,000 이하이다.

/* solution 1
#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
    return 0;
}
*/

#include <iostream>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, a, b;
    std::cin >> n;
    for(int i=0; i<n; i++){
        std::cin >> a >> b;
        std::cout << a + b << "\n";
    }
    return 0;
}