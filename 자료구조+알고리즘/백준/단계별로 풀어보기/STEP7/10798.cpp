#include <iostream>
int main()
{
    char word[5][16] = {""};

    for(int i=0; i<5; i++){
        std::cin >> word[i];
    }
    for(int i=0; i<16; i++){
        for(int j=0; j<5; j++){
            if((word[j][i] >= 'a' && word[j][i] <='z') | 
                (word[j][i] >= 'A' && word[j][i] <='Z') |
                (word[j][i] >= '0' && word[j][i] <='9')){
                    std::cout << word[j][i];
                }
        }
    }
    return 0;
}