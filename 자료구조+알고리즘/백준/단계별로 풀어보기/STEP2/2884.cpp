// 현재 상근이가 설정한 알람 시각이 주어졌을 때, 창영이의 방법을 사용한다면, 이를 언제로 고쳐야 하는지 구하는 프로그램을 작성하시오.

#include <iostream>

int main()
{
    int H, M;
    std::cin >> H >> M;

    if(M >= 45){
        M -= 45;
    }
    else if(H == 0){
        H = 23;
        M += 15;
    }
    else{
        H -= 1;
        M += 15;
    }

    std::cout << H << " " << M;
    
    return 0;
}