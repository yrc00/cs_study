//구매한 물건의 가격과 개수로 계산한 총 금액이 영수증에 적힌 총 금액과 일치하면 Yes를 출력한다. 일치하지 않는다면 No를 출력한다.
#include <iostream>
int main()
{
    int X, N, a, b, sum=0;
    std::cin >> X >> N;
    for(int i=0; i<N; i++){
        std::cin >> a >> b;
        sum += a*b;
    }
    if(sum == X) std::cout << "Yes";
    else std::cout << "No";
    return 0;
}