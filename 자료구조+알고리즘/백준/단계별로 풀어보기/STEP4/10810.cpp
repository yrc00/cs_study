#include <iostream>
int main()
{
    int n, m, i, j, k;
    std::ios_base::sync_with_stdio(false);
    std::cin >> n >> m;

    int vec[100] = {0};
    for(int l=0; l<m; l++){
        std::cin >> i >> j >> k;
        for(int p=i-1; p<j; p++){
            vec[p]=k;
        }
    }

    for(int l=0; l<n; l++){
        std::cout << vec[l] << " ";
    }
    return 0;
}