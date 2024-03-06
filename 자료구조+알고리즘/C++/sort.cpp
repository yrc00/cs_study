// https://dragondeok.tistory.com/11

// 일반 배열 정렬
/*
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
    sort(a, a+10);
    for(int i=0; i<10; i++){
        cout << a[i] << " ";
    }
    return 0;
}
*/

// 사용자 정의
/*
#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    return a>b; // a가 b보다 클 때 우선적으로 출력 (내림차순)
}

int main()
{
    int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
    sort(a, a+10, compare);
    for(int i=0; i<10; i++){
        cout << a[i] << " ";
    }
    return 0;
}
*/

// 객체 비교
/*
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
public:
    string name;
    int score;
    Student(string name, int score){
        this->name = name;
        this->score = score;
    }
};

bool operator < (const Student& student1, const Student& student2){
    return student1.score < student2.score;
}

int main()
{
    Student students[] = {
        Student("김일병", 90),
        Student("김이병", 93),
        Student("김상병", 97),
        Student("김사병", 87),
        Student("김오병", 92)
    };

    sort(students, students + 5);

    for(int i=0; i<5; i++){
        cout << students[i].name << " ";
    }
    return 0;
}
*/

// 변수가 3개일 때 2개 변수로 정렬
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b){
    if(a.second.first == b.second.first){
        return a.second.second > b.second.second;
    }else{
        return a.second.first > b.second.first;
    }
}

int main()
{
    vector<pair<string, pair<int, int>>> v;

    v.push_back(pair<string, pair<int, int>>("김일병", make_pair(90, 19961001)));
    v.push_back(pair<string, pair<int, int>>("김이병", make_pair(97, 19940505)));
    v.push_back(pair<string, pair<int, int>>("김상병", make_pair(95, 19940101)));
    v.push_back(pair<string, pair<int, int>>("김사병", make_pair(90, 19910909)));
    v.push_back(pair<string, pair<int, int>>("김오병", make_pair(88, 19850303)));

    sort(v.begin(), v.end(), compare);

    for(int i=0; i<v.size(); i++){
        cout << v[i].first << " ";
    }
    
    return 0;
}