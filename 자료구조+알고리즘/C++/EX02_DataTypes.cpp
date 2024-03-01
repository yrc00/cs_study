// 홍정모 연구소 https://honglab.co.kr/

#include <iostream>
using namespace std;

int main()
{
    // 정수형 변수 
    int i;
    i = 123;

    cout << i << " " << sizeof(i) << endl;  // 123 4

    // 실수형 변수
    float f = 123.456f;
    double d = 123.456;

    cout << f << " " << sizeof(f) << endl;  // 123.456 4
    cout << d << " " << sizeof(d) << endl;  // 123.456 8

    // 문자형 변수
    char c = 'a';
    cout << c << " " << sizeof(c) << endl; // a 1

    // 형변환
    i = 987.654;
    cout << "int from double " << i << endl; // int from double 987
    f = 567.89;

    // 기본 연산자
    i = 987;
    i += 100;
    i++;

    cout << i << endl;  // 1088

    // 불리언
    bool is_good = true;
    is_good = false;

    cout << is_good << endl;                // 0
    cout << boolalpha << true << endl;      // true
    cout << is_good << endl;                // false
    cout << noboolalpha << true << endl;    // 1

    cout << boolalpha;                      
    cout << (true && true) << endl;         // ture
    cout << (true || false) << endl;        // true

    // 비교
    cout << (1>3) << endl;          // false
    cout << (3 == 3) << endl;       // true
    cout << (i>=3) << endl;         // true
    cout << ('a' != 'c') << endl;   // true
    cout << ('a' != 'a') << endl;   // false

    // 영역
    i = 123;

    {
        int i=345;
        cout << i << endl;  //345
    }

    cout << i << endl;  //123

    return 0;
}