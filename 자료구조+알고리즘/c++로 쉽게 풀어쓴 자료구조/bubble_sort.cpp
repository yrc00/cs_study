#include <iostream>
#include <cstdlib>

// 두 정수를 교환하는 함수 : inline 함수, 매개변수로 레퍼런스형 사용
inline void swap(int& x, int& y){
    int t = x;
    x = y;
    y = t;
}

// 버블 정렬 알고리즘을 이용해 int 배열을 오름차순으로 정렬하는 함수
void bubbleSort(int A[], int n)
{
    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(A[j] > A[j+1]){
                swap(A[j], A[j+1]); 
            }
        }
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
    int n=16;

    initRandom(list, n);
    printArray(list, n, "Original ");

    bubbleSort(list, n);
    printArray(list, n, "Bubble ");

}