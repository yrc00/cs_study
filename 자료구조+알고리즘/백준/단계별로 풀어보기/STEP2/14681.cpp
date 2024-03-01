// 점의 좌표를 입력받아 그 점이 어느 사분면에 속하는지 알아내는 프로그램을 작성하시오. 단, x좌표와 y좌표는 모두 양수나 음수라고 가정한다.

#include <iostream>
int main()
{
    int x, y;
    std::cin >> x >> y;
    if(x>0 && y>0) std::cout << "1";
    else if(x>0 && y<0) std::cout << "4";
    else if(x<0 && y>0) std::cout << "2";
    else std::cout << "3";
    return 0;
}