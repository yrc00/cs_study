#include <iostream>

int f(int n, int *d)
{
    int max=d[0], idx=0;
    for(int i=0; i<n; i++){
        if(d[i] > max){
            max = d[i];
            idx = i+1;
        }
    }
    return idx;
}

int main()
{
    int n;
    int d[1000];
    std::cin >> n;

    for(int i=0; i<n; i++){
        std::cin >> d[i];
    }

    std::cout << f(n, d);
    return 0;
}