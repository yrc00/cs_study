// 두 정수 A와 B를 입력받은 다음, A×B를 출력하는 프로그램을 작성하시오.

#include <iostream>

int main()
{
    double num1, num2;
    std::cin >> num1 >> num2;
    std::cout.precision(10);
    std::cout << num1 / num2;
    return 0;
}