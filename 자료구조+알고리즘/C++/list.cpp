// c++로 구현하는 자료구조와 알고리즘 - 단일 링크드 리스트 구현
#include <iostream>
#include <string>
using namespace std; // std namespace 사용

class StringNode {
private:
    string elem; // element value
    StringNode* next; // next item in the list

    friend class StringLinkedList; // provide StringLinkedList access
};

class StringLinkedList {
public:
    StringLinkedList();
    ~StringLinkedList();
    bool empty() const;
    const string& front() const;
    void addFront(const string& e); // 함수명 오타 수정
    void removeFront();
private:
    StringNode* head; // 헤드의 위치만 알면 된다.
};

// 생성자, 소멸자, empty(), front() 함수
StringLinkedList::StringLinkedList()
    :head(NULL){ }

StringLinkedList::~StringLinkedList()
{
    while (!empty()) removeFront();
}

bool StringLinkedList::empty() const
{
    return head == NULL; // 비교 연산자 수정
}

const string& StringLinkedList::front() const
{
    return head->elem;
}

// 리스트 앞에 삽입
void StringLinkedList::addFront(const string& e)
{
    StringNode* v = new StringNode;
    v->elem = e;
    v->next = head;
    head = v;
}

// 리스트 앞에서 삭제
void StringLinkedList::removeFront()
{
    StringNode* old = head;
    head = old->next;
    delete old;
}

int main() {
    StringLinkedList list;
    list.addFront("Hello");
    list.addFront("World");
    cout << list.front() << endl;
    list.removeFront();
    cout << list.front() << endl;

    return 0;
}
