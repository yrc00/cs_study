#include <iostream>
#include <queue>

void radixSort(int list[], int size, int maxDigits)
{
    std::queue<int> bucket[10];
    int factor = 1;

    for(int d = 0; d < maxDigits; d++){
        for(int i = 0; i < size; i++){
            bucket[(list[i] / factor) % 10].push(list[i]);
        }
        
        int b, i;
        for(b = i=0; b < 10; b++){
            while(!bucket[b].empty()){
                list[i++] = bucket[b].front();
                bucket[b].pop();
            }
        }
        factor *= 10;
    }
}

// 랜덤 함수를 이용하여 int 배열을 0~max-1의 값으로 무작위로 채우는 함수
static void initRandom(int list[], int n, int max = 100)
{
    for(int i = 0; i < n; i++)
        list[i] = rand() % max;
}

// 배열을 화면에 보기 좋게 출력하는 함수, 디폴트 매개변수 사용
static void printArray(int arr[], int n, const char *str = "Array")
{
    std::cout << str << " = ";
    for(int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main()
{
    int list[16];
    int n = 16;
    initRandom(list, n);
    printArray(list, n, "Original ");
    radixSort(list, n, 2);
    printArray(list, n, "radixSort ");
    return 0;
}
