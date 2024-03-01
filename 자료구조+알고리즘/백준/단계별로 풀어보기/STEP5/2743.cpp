#include <iostream>
int main()
{
    char s[101];
    std::cin >> s;
    for(int i=0; i<101; i++){
        if(s[i] == '\0'){
            std::cout << i;
            break;
        }
    }
    return 0;
}