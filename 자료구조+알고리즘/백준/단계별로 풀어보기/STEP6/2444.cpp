#include <iostream>
using std::cin;
using std::cout;
int main()
{
    int n;
    std::ios_base::sync_with_stdio(false);
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input";
        return 0;
    }

    int i, j;
    for(i=1; i<n; i++){
        for(j=0; j<n-i; j++) cout << " ";
        for(j=0; j<2*i-1; j++) cout << "*";
        cout << "\n";
    }

    for(i=n; i>0; i--){
        for(j=0; j<n-i; j++) cout << " ";
        for(j=0; j<2*i-1; j++) cout << "*";
        cout << "\n";
    }

    return 0;
}