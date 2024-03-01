// 첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.

#include <iostream>
int main()
{
    int n, input, min = 10000000, max = -10000001;

    std::cin >> n;
    for(int i=0; i<n; i++){
        std::cin >> input;
        if(input < min) min = input;
        if(input > max) max = input;
    }
    std::cout << min << " " << max;
    return 0;
}