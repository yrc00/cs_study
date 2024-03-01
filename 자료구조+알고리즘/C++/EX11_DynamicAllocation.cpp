// 홍정모 연구소 https://honglab.co.kr/

#include <iostream>
#include <cstring>
using namespace std;

const int KMaxStr = 100;

int Min(int a, int b)
{
    return a < b ? a : b;
}

int main()
{
    char str1[] = "Hello, world!";
    char str2[KMaxStr];

    memcpy(str2, str1, Min(sizeof(str1), sizeof(str2)));
    cout << str2 << endl;

    char *dynamic_array = new char[KMaxStr];

    memcpy(dynamic_array, str1, Min(sizeof(str1), sizeof(KMaxStr)));
    cout << dynamic_array << endl;

    cout << str1 << " " << str2 << " " << dynamic_array << endl;
    cout << size_t(str1) << " " << size_t(str2) << " " << size_t(dynamic_array) << endl;

    delete[] dynamic_array;

    return 0;
}