#include <iostream>
int main()
{
    int input, sum=0;
    int vec[42] = {0};
    for(int i=0; i<10; i++){
        std::cin >> input;
        vec[input%42]++;
    }
    for(int i=0; i<42; i++){
        if(vec[i] != 0) sum++;
    }
    std::cout << sum;

    return 0;
}