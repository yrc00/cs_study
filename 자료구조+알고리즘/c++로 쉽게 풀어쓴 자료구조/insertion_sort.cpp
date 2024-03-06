#include <iostream>
#include <cstdlib>
#include <cstring>

// 삽입정렬 알고리즘을 이용해 int 배열을 오름차순으롲 얼려하는 함수
void insertionSort(int A[], int n)
{
    for(int i=1; i<n; i++){
        int key = A[i];
        int j;
        for(j=i-1; j>=0 && A[j]>key; j--)
            A[j+1] = A[j];
        A[j+1] = key;
    }
}

inline int ascend(int x, int y){return y-x;} // 오름차순 비교함수
inline int descend(int x, int y){return x-y;} // 내림차순 비교함수

// 함수 포인터를 매개변수로 받는 삽입정렬 함수
void insertionSortFn(int A[], int n, int (*f)(int, int))
{
    for(int i=1;i <n; i++){
        int key = A[i];
        int j;
        for(j=i-1; j>=0 && f(A[j], key) > 0; j--)
            A[j+1] = A[j];
        A[j+1] = key;
    }
}

// 랜덤 함수를 이용하여 int 배열을 0~max-1의 값으로 무작위로 채우는 함수
static void initRandom(int list[], int n, int max=100)
{
    for(int i=0; i<n; i++)
        list[i] = rand()%max;
}

// 배열을 화면에 보기 좋게 출력하는 함수, 디폴트 매개변수 사용
static void printArray(int arr[], int n, const char *str="Array")
{
    std::cout << str << " = ";
    for(int i=0; i<n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main()
{
    int list[16];
    int org[16] = {0};
    int n=16;
    initRandom(list, n);
    printArray(list, n, "Original ");   // 정렬전 배열 내용을 출력

    memcpy(org, list, n*sizeof(int));   // 배열 복사: list -> org
    insertionSortFn(list, n, ascend);   // 오름차순 선택정렬 알고리즘
    printArray(list, n, "Insert-As ");  // 정렬후 배열 내용을 출력

    memcpy(org, list, n*sizeof(int));   // 배열 복사: list -> org
    insertionSortFn(list, n, descend);  // 내림차순 선택정렬 알고리즘
    printArray(list, n, "Insert-De ");  // 정렬후 배열 내용을 출력

}