#include <iostream>
#include <cstring>
int main()
{
    int time[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    char word[16];
    int sum = 0;
    
    std::ios_base::sync_with_stdio(false);
    std::cin >> word;
    for(int i=0; i<strlen(word); i++){
        sum += time[word[i] - 'A'];
    }
    std::cout << sum;

    return 0;
}