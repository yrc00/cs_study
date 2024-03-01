// 홍정모 연구소 https://honglab.co.kr/

#include <iostream>
using namespace std;

const int KMaxStr = 100;

int Add(int a, int b)
{
    return a + b;
}

void Add(int a, int b, int *c)
{
    *c = a + b;
}

int main()
{
    cout << Add(1, 2) << endl; // 3

    int sum;
    Add(4, 5, &sum);

    cout << sum << endl; // 9

    return 0;
}