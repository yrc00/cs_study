#include <iostream>
int main()
{
    int chess[6] = {1, 1, 2, 2, 2, 8};
    int cnt;
    
    std::ios_base::sync_with_stdio(false);
    for(int i=0; i<6; i++){
        std::cin >> cnt;
        chess[i] -= cnt;
    }
    for(int i=0; i<6; i++)
        std::cout << chess[i] << " ";
    
    return 0;
}