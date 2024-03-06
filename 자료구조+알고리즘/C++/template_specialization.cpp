// https://blockdmask.tistory.com/45
// 템플릿 특수화

#include <iostream>
#include <string>
using namespace std;

template <class T>
T sum(T a, T b){
    return a + b;
}

template<>
char* sum<char *> (char* s1, char* s2){
    char* str
}