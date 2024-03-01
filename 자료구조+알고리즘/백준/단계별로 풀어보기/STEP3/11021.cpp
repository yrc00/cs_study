//각 테스트 케이스마다 "Case #x: "를 출력한 다음, A+B를 출력한다. 테스트 케이스 번호는 1부터 시작한다.

#include <iostream>
int main()
{
    int n, a, b;
    std::ios_base::sync_with_stdio(false);
    std::cin >> n;
    for(int i=1; i<=n; i++){
        std::cin >> a >> b;
        std::cout << "Case #" << i << ": " << a+b << "\n";
    }
    return 0;
}