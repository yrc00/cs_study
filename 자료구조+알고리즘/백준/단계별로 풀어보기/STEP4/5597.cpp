#include <iostream>
int main()
{
    int idx, student[31]={0};
    for(int i=0; i<28; i++){
        std::cin >> idx;
        student[idx]++;
    }

    for(int i=1; i<31; i++){
        if(student[i] == 0)
            std::cout << i << '\n';
    }
    return 0;
}