#include <iostream>
int main()
{
    int max=0, idx=1, input;
    std::ios_base::sync_with_stdio(false);
    for(int i=0; i<9; i++){
        std::cin >> input;
        if(input > max){
            max = input;
            idx = i+1;
        }
    }
    std::cout << max << "\n" << idx;
    return 0;
}