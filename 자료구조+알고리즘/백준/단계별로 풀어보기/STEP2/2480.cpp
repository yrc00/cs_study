//3개 주사위의 나온 눈이 주어질 때, 상금을 계산하는 프로그램을 작성 하시오.

#include <iostream>

int main()
{
    int a, b, c, p;
    std::cin >> a >> b >> c;

    if(a==b && b==c)
        p = 10000 + a * 1000;
    else if(a==b || b==c)
        p = 1000 + b * 100;
    else if(c==a)
        p = 1000 + a * 100;
    else{
        int max;
        if(a >= b && a >= c) max = a;
        else if(b >= a && b>=c) max = b;
        else max = c;
        p = max * 100;
    }    
    
    std::cout << p;
    return 0;
}