#include <iostream>
#include <cstdlib>
#define MAX_SIZE 1024

static void merge(int A[], int left, int mid, int right)
{
    int i, j, k = left, l;
    static int sorted[MAX_SIZE];

    // 분할 정렬된 A의 합병
    for(i=left, j=mid+1; i<=mid && j<=right; ) {
        sorted[k++] = (A[i] <= A[j]) ? A[i++] : A[j++];
    }
    
    // 한 쪽에 남아있는 레코드의 일괄 복사
    if(i > mid) {
        for(l=j; l<=right; l++, k++) {
            sorted[k] = A[l];
        }
    } else {
        for(l=i; l<=mid; l++, k++) {
            sorted[k] = A[l];
        }
    }

    // 배열 sorted[]의 리스트를 배열 A[]로 재복사
    for(l=left; l<=right; l++) {
        A[l] = sorted[l];
    }
}

void mergeSort(int A[], int left, int right)
{
    if(left < right){
        int mid = left + (right - left) / 2;   // 리스트의 중간 값 계산
        mergeSort(A, left, mid);    // 부분 리스트 정렬
        mergeSort(A, mid+1, right); // 부분 리스트 정렬
        merge(A, left, mid, right); // 합병
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
    mergeSort(list, 0, n-1);
    printArray(list, n, "Merge ");
    return 0;
}
