#include <iostream>
int main()
{
    int a, b;
    std::cin >> a >> b;
    a = (a%10*100) + (a%100/10*10) + a/100;
    b = (b%10*100) + (b%100/10*10) + b/100;

    if(a>=b)
        std::cout << a;
    else   
        std::cout << b;

    return 0;
}