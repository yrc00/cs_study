#include <iostream>
int main()
{
    int a=-1, b=-1;
    while(1){
        std::cin >> a >> b;
        if(a==0 && b==0) break;
        if(b%a == 0)
            std::cout << "factor" << "\n";
        else if(a%b == 0)
            std::cout << "multiple" << "\n";
        else
            std::cout << "neither" << "\n";
    }
    return 0;
}