#include <iostream>
int main()
{
    int t, c;
    int Quarter=0, Dime=0, Nickel=0, Penny=0;
    std::cin >> t;
    for(int i=0; i<t; i++){
        std::cin >> c;
        
        Quarter = c / 25;
        c -= Quarter*25;

        Dime = c / 10;
        c -= Dime*10;

        Nickel = c / 5;
        c -= Nickel*5;

        Penny = c / 1;
        c -= Penny * 1;
        
        if(c!=0)
            std::cout << "error";
        else{
            std::cout << Quarter << " " << Dime << " " << Nickel << " " << Penny << "\n";
        }

    }
    return 0;
}