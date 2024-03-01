#include <iostream>
int main()
{
    int n, m;
    int a[100][100] = {0};
    int b;

    std::ios_base::sync_with_stdio(false);
    std::cin >> n >> m;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            std::cin >> a[i][j];
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            std::cin >> b;
            a[i][j] += b;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            std::cout << a[i][j] << " ";
        }
        std::cout << '\n';
    }
    return 0;
}