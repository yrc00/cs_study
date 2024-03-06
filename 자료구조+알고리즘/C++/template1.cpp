// https://blockdmask.tistory.com/43
#include <iostream>
#include <string>

using namespace std;

template<typename T>
T sum(T a, T b){
    return a + b;
}

int main()
{
    int a = 1, b = 2;

    double d1 = 1.1;
    double d2 = 2.2;

    string s1 = "Hello ";
    string s2 = "World!";

    cout << "int 합: " << sum<int>(a, b) << endl;
    cout << "double 합: " << sum<double>(d1, d2) << endl;
    cout << "string 합: " << sum<string>(s1, s2) << endl;

    return 0;
}