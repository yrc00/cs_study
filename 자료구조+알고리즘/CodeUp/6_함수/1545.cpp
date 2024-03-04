#include <iostream>

bool zero(int n){
    return n==0;
}

int main()
{
    int n;
    std::cin >> n;
    if(zero(n)) std::cout << "zero";
    else std::cout << "non zero";
    return 0;
}