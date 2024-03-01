// 홍정모 연구소 https://honglab.co.kr/
#include <iostream>
using namespace std;

int main()
{
    int a = 123;

    cout << a << " " << &a << endl; // 123 0x61ff00
    
    int *b = &a; // b에 a의 주소 대입
    cout << *b << endl; // 123

    *b = 5676; // a=5676
    cout << a << " " << b << " " << *b << endl; // 5676 0x61ff00 5676

    double *c = nullptr;
    cout << sizeof(int) << " " << sizeof(double) << endl; // 4 8
    cout << sizeof(int *) << " " << sizeof(double *) << endl; // 4 4
    cout << sizeof(b) << " " << sizeof(c) << endl; // 4 4

    cout << sizeof(size_t) << endl; // 4
    cout << size_t(b) << " " << size_t(b+1) << " " << size_t(b+2) << endl; // 6422272 6422276 6422280
    cout << size_t(c) << " " << size_t(c+1) << " " << size_t(c+2) << endl; // 0 8 16

    char my_str[] = {'h', 'e', 'l', 'l', 'o'};
    char *ptr = my_str;
    cout << *(ptr+3) << endl; //ㅣ

    return 0;
}