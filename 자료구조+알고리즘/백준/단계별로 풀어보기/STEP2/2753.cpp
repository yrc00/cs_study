// 연도가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램을 작성하시오.

#include <iostream>

int main()
{
    int y;
    std::cin >> y;
    if(y%4==0 && y%100!=0 || y%400==0)
        std::cout << "1";
    else
        std::cout << "0";
    return 0;
}