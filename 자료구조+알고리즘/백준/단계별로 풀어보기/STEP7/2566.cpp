#include <iostream>
int main()
{
    int x=0, y=0, max=0;
    int num[9][9];
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            std::cin >> num[i][j];
            if(num[i][j] > max){
                x = i;
                y = j;
                max = num[i][j];
            }
        }
    }
    std::cout << max << '\n';
    std::cout << x+1 << " " << y+1;
    return 0;
}