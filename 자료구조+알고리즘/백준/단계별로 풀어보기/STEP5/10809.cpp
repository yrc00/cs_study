#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101];
    int alpha[26];
    memset(alpha, -1, sizeof(alpha));
    
    cin >> s;
    
    for (int i = 0; i < strlen(s); i++) {
        if (islower(s[i])) {
            int idx = s[i] - 'a';
            if (alpha[idx] == -1) {
                alpha[idx] = i;
            }
        }
    }
    
    for (int i = 0; i < 26; i++) {
        cout << alpha[i] << " ";
    }
    
    return 0;
}
