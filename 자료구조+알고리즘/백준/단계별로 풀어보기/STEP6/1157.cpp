#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
int main()
{
    string word;
    int cnt[26] = {0};
    int max = -1;
    char c;

    std::ios_base::sync_with_stdio(false);
    cin >> word;
    
    for(int i=0; i<word.length(); i++){
        word[i] = toupper(word[i]);
        cnt[word[i]-'A']++;
    }

    for(int i=0; i<26; i++){
        if(cnt[i] > max){
            max = cnt[i];
            c = i + 'A';
        }
        else if(cnt[i] == max){
            c = '?';
        }
    }

    cout << c;

    return 0;
}