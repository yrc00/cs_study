#include <iostream>
#include <cstring>

int main() {
    int t;
    char s[1001];
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        std::cin >> s;
        std::cout << s[0] << s[strlen(s) - 1] << std::endl;
    }

    return 0;
}