#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int cnt = 0;
    getline(cin, s);

    if(s.empty()) {
        cout << "0";
        return 0;
    }

    if(s[0] != ' ')
        cnt = 1;
    
    for(int i = 0; i < s.length() - 1; i++) {
        if(s[i] == ' ' && s[i + 1] != ' ')
            cnt++;
    }

    cout << cnt;
    return 0;
}
