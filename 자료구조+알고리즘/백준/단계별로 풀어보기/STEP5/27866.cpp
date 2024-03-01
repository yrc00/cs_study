#include <iostream>
int main()
{
    char s[1001];
    int i;

    std::cin >> s;
    std::cin >> i;
    std::cout << s[i-1];
    return 0;
}
