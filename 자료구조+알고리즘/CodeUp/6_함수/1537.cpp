#include <iostream>

void f(int n)
{
    if(n == 1)
        std::cout << "hello";
    else if(n == 2)
        std::cout << "world";
}

int main()
{
    int n;
    std::cin >> n;
    f(n);

    return 0;
}