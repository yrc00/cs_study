#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int n;

    while(1){
        cin >> n;

        if(n == -1)
            break;
        
        int sum = 0;
        cout << n;

        for(int i=1; i<n; i++){
            if(n%i == 0) sum+=i;
            if(sum > n) break;
        }

        if(sum == n){
            cout << " = " << "1";
            for(int i=2; i<n; i++){
                if(n%i==0){
                    cout << " + " << i;
                }
            }
        }
        else{
            cout << " is NOT perfect";
        }

        cout << '\n';    
    }

    return 0;
}