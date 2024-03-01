// N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.

#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    for(int i=1; i<=9; i++){
        std::cout << n << " * " << i << " = " << n*i << std::endl;
    }
    return 0;
}