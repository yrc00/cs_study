#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;
int main()
{
    string word;
    int cnt=0;
    std::ios_base::sync_with_stdio(false);
    cin >> word;

    for(int i=0; i<word.length(); i++){
        if(word[i] == 'c'){
            if(word[i+1] == '=' | word[i+1] == '-')
                i++;
        }

        else if(word[i] == 'd'){
            if(word[i+1] == 'z'){
                if(word[i+2] == '=')
                    i+=2;
            }
            else if(word[i+1] == '-')
                i++;
        }

        else if(word[i] == 'l' | word[i] == 'n'){
            if(word[i+1] == 'j')
                i++;
        }

        else if(word[i] == 's' | word[i] == 'z'){
            if(word[i+1] == '=')
                i++;
        }
        cnt++;
    }
    cout << cnt;
    return 0;
}