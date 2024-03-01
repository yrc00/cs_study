// 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.

#include <iostream>
int main()
{
    int n;
    std::ios_base::sync_with_stdio(false);
    std::cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++)
            std::cout << "*";
        std::cout << "\n";
    }
    return 0;
}