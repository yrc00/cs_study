// 홍정모 연구소 https://honglab.co.kr/

#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    // ...
    
    // 배열
    int my_array[3] = {1, 2, 3}; 

    // 인덱싱
    cout << my_array[0] << " "
         << my_array[1] << " "
         << my_array[2] << endl;    // 1 2 3

    my_array[1] = 5;

    cout << my_array[0] << " "
         << my_array[1] << " "
         << my_array[2] << endl;    // 1 2 5
    
    // 문자열
    char name[] = "Hello, World!";
    cout << name << " " << sizeof(name) << endl;    // Hello, World! 14

    name[0] = 'A';
    name[1] = 'B';
    name[2] = 'C';

    cout << name << endl;   // ABClo, World!

    name[2] = '\0';
    cout << name << endl;   // AB

    return 0;
}