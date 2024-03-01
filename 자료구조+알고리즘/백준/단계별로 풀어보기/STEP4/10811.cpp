#include <iostream>
using namespace std;

int main() {
    int n, m, i, j, tmp;
    ios_base::sync_with_stdio(false);
    cin >> n >> m;

    int vec[101]; 
    for(int k = 1; k <= n; k++) {
        vec[k] = k;
    }

    for(int k = 0; k < m; k++) {
        cin >> i >> j; 
        for(int l = i; l <= (i + j) / 2; l++) {
            tmp = vec[l];
            vec[l] = vec[i + j - l];
            vec[i + j - l] = tmp;            
        }
    }

    for(int k = 1; k <= n; k++) {
        cout << vec[k] << " ";
    }

    return 0;
}
