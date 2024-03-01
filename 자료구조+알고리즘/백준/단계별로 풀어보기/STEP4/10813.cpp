#include <iostream>
int main()
{
    int n, m, i, j, k, tmp;
    std::ios_base::sync_with_stdio(false);
    std::cin >> n >> m;

    int vec[100];
    for(int l=0; l<n; l++){
        vec[l] = l+1;
    }
    for(int l=0; l<m; l++){
        std::cin >> i >> j;
        tmp = vec[i-1];
        vec[i-1] = vec[j-1];
        vec[j-1] = tmp;
    }

    for(int l=0; l<n; l++){
        std::cout << vec[l] << " ";
    }

    return 0;
}