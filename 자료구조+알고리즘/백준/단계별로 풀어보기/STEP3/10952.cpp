#include <iostream>
int main()
{
    int a, b;
    std::ios_base::sync_with_stdio(false);
    while(1){
        std::cin >> a >> b;
        if(a==0 && b==0)
            break;
        std::cout << a+b << "\n";
    }
    return 0;
}