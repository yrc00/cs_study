#include <iostream>
int main()
{
    int n, max = 0;
    double score[1000];
    double sum = 0;
    std::ios_base::sync_with_stdio(false);
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> score[i];
        if (score[i] > max) max = score[i];
    }
    for (int i = 0; i < n; i++) {
        sum += (score[i] / max * 100);
    }
    
    std::cout << sum / n;

    return 0;
}