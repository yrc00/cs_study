// 훈제오리구이를 시작하는 시각과 오븐구이를 하는 데 필요한 시간이 분단위로 주어졌을 때, 오븐구이가 끝나는 시각을 계산하는 프로그램을 작성하시오.

#include <iostream>

int main()
{
    int H, M, T;
    std::cin >> H >> M >> T;
    
    M += T;

    H += M/60;
    M %= 60;

    if(H >= 24)
        H %= 24;
    
    std::cout << H << " " << M;
    return 0;
}