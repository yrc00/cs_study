#include <iostream>
#include <cstring>
int main()
{
    int t, r;
    char s[21];
    char p[20001];
    std::ios_base::sync_with_stdio(false);
    std::cin >> t;
    
    for(int i=0; i<t; i++){
        std::cin >> r >> s;
        for(int j=0; j<strlen(s); j++){
            for(int k=0; k<r; k++){
                std::cout << s[j];
            }
        }
        std::cout << '\n';
    }

    return 0;
}