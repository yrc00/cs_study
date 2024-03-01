// 홍정모 연구소 https://honglab.co.kr/

#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    if(number % 2 == 0)
        cout << "짝수 입니다.\n";
    else
        cout << "홀수 입니다.\n";

    cout << (number%2 ==0 ? "짝수입니다.":"홀수입니다.") << endl;

    switch(number)
    {
        case 0:
            cout << "정수 0입니다." << endl;
            break;
        case 1:
            cout << "정수 1입니다." << endl;
            break;
        default:
            cout << "그 외의 숫자입니다." << endl;
            break;
    }

    return 0;
}