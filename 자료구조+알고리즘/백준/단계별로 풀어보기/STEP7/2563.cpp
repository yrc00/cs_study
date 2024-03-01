#include <iostream>
int main()
{
    int size[100][100] = {0};
    int n, x, y, cnt=0;
    std::cin >> n;
    for(int i=0; i<n ;i++){
        std::cin >> x >> y;
        for(int j=x; j<x+10; j++){
            for(int k=y; k<y+10; k++){
                size[k][j]++;
            }
        }
    }
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            if(size[i][j] != 0)
                cnt++;
        }
    }
    std::cout << cnt;
    return 0;
}