#include <iostream>

double abs(double n){
    if(n>=0) return n;
    else return (-1)*n;
}

int main()
{
    double n;
    std::cin >> n;
    std::cout << abs(n);
    return 0;
}