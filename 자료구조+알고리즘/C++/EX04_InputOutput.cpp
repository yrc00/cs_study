// 홍정모 연구소 https://honglab.co.kr/

#include <iostream>
using namespace std;

int main()
{
    char user_input[100];

    // cin vs getline
    cout << "원하는 문장을 입력하세요." << endl;
    cout << "입력: ";
    cin >> user_input;
    //cin.getline(user_input, sizeof(user_input));
    cout << "메아리: " << user_input << endl;

    /*
    int number = -1;
    cin >> user_input;
    cin.getline(user_input, sizeof(user_input));
    cin.ignore(100, '\n');
    cin >> number;
    cout << user_input << " " << number << endl;
    // cin.ignore(numeric_limits<streamsize>::max(), '\n')
    */

    return 0;
}