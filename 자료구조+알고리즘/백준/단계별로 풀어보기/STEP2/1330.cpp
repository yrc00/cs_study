// 두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.

#include <iostream>
int main()
{
    int a, b;
    std::cin >> a >> b;
    if(a > b) std::cout << ">";
    else if(a<b) std::cout << "<";
    else std::cout << "==";
    return 0;
}