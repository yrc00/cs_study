#include <iostream>
int main()
{
    char vec[101];
    int n, sum=0;
    std::ios_base::sync_with_stdio(false);
    std::cin >> n;
    
    std::cin >> vec;
    for(int i=0; i<n; i++){
        sum+=int(vec[i])-int('0');
    }
    std::cout << sum;
    return 0;
}