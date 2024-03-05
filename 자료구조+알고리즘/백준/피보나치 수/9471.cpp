#include <iostream>
using std::cin;
using std::cout;

int k(int m)
{
    int a=1, b=1, tmp, cnt=0;
    while(1){
        tmp = (a + b)%m;
        a = b;
        b = tmp;
        cnt++;

        if(a==1 && b==1) break;
    }
    return cnt;
}

int main()
{
    int p;
    cin >> p;

    int n, m;
    for(int i=0; i<p ;i++){
        cin >> n >> m;
        cout << n << " " << k(m) << "\n";
    }
    return 0;
}