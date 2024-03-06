#include <iostream>
#include <cstdlib>

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

static void sortGapInsertion(int A[], int first, int last, int gap)
{
    int i, j, key;
    for(i=first+gap; i<=last; i=i+gap){
        key = A[i];
        for(j=i-gap; j>=first && key<A[j] ;j=j-gap)
            A[j+gap] = A[j];
        A[j+gap] = key;
    }
}

// 셀 정렬 알고리즘을 이용해 int 배열을 오름차순으로 정렬하는 함수
void shellSort(int A[], int n)
{
    for(int gap=n/2; gap>0; gap=gap/2){
        printArray(A, n, "Shell...");
        if((gap%2) == 0) gap++;
        for(int i=0; i<gap; i++)
            sortGapInsertion(A, i, n-1, gap);
    }
}

int main()
{
    int list[16];
    int n=16;
    initRandom(list, n);
    printArray(list, n, "Original ");
    shellSort(list, n);
    printArray(list, n, "Shell ");
    return 0;
}
