// 시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

#include <iostream>

int main()
{
    int s;
    std::cin >> s;

    if(s>=90 && s<=100) std::cout << "A";
    else if(s>=80) std::cout << "B";
    else if(s>=70) std::cout << "C";
    else if(s>=60) std::cout << "D";
    else std::cout << "F";

    return 0;
}