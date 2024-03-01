#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

int main()
{
    int n, cnt=0;
    string word;
    int alphabet[26] = {0};
    std::ios_base::sync_with_stdio(false);
    cin >> n;

    for(int i=0; i<n; i++){
        memset(alphabet, 0, 26*sizeof(alphabet));
        cnt++;
        
        for(int j=0; j<word.length(); j++){
            alphabet[word[i]-'a']++;
        }
        for(int j=0; j<word.length(); j++){
            if(word[j] > 1){
                cnt--;
                break;
            }
        }
    }
    cout << cnt;

    return 0;
}