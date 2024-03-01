#include <iostream>
int main()
{
    int a, b, v;
    std::cin >> a >> b >> v;
    
    int cnt = 0;
    while(1){
        cnt++;
        
        v -= a;
        if(v<=0) break;
        
        v += b;
        if(v<=0) break;
    }

    std::cout << cnt;

    return 0;
}