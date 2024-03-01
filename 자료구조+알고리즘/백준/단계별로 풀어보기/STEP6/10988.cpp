#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;

int main()
{
    string word;
    int answer = 1;
    std::ios_base::sync_with_stdio(false);
    cin >> word;
    for(int i=0; i<word.length()/2; i++){
        if(word[i] != word[word.length()-1-i]){
            answer=0;
            break;
        }
    }
    cout << answer;
    return 0;
}