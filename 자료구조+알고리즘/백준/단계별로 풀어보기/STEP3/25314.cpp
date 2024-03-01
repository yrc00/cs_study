/*solution 1
#include <iostream>
int main()
{
    int N;
    std::cin >> N;
    for(int i=0; i<(N/4); i++){
        std::cout << "long ";
    }
    std::cout << "int";
    return 0;
}
*/

#include <stdio.h>
int main()
{
    int a, b;
    while(scanf("%d, %d", &a, &b) != EOF)
        printf("%d\n", a+b);
    return 0;
}