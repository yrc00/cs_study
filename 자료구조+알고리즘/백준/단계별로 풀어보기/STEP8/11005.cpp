#include <iostream>
#include <string>
#include <cmath>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string num = "";
    int digit, format;

    cin >> digit >> format;

    if (digit == 0) {
        cout << "0";
        return 0;
    }

    while(digit!=0){
        int n = digit%format;
        if(n<10)
            num = char(n + '0') + num;
        else
            num = char(n-10+'A') + num;
        
        digit = digit/format;
    }
    
    cout << num;
    
    return 0;
}