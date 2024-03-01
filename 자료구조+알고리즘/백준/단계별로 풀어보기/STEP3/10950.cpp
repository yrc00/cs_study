// 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
// 각 테스트 케이스마다 A+B를 출력한다.

#include <iostream>

int main()
{
    int n, a, b;
    std::cin >> n;
    for(int i=0; i<n; i++)
    {
        std::cin >> a >> b;
        std::cout << a+b << std::endl;
    }

    return 0;
}