#include <iostream>
#include <cstdlib>

// 두 정수를 교환하는 함수 : inline 함수, 매개변수로 레퍼런스형 사용
inline void swap(int& x, int& y){
    int t = x;
    x = y;
    y = t;
}

static int partition(int A[], int left, int right)
{
    int pivot = A[right];
    int i = left - 1;
    
    for (int j = left; j < right; j++) {
        if (A[j] <= pivot) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[right]);
    return i + 1;
}

// 퀵 정렬 알고리즘을 이용해 배열의 left, right 항목들을 오름차순으로 정렬하는 함수
void quickSort(int A[], int left, int right)
{
    if(left < right){                       // 정렬 범위가 2개 이상인 경우
        int q = partition(A, left, right);  // 좌우로 분할
        quickSort(A, left, q-1);            // 왼쪽 부분리스트를 퀵 정렬
        quickSort(A, q+1, right);           // 오른쪽 부분리스트를 퀵 정렬
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
    quickSort(list, 0, n-1);
    printArray(list, n, "Quick ");
    return 0;
}
