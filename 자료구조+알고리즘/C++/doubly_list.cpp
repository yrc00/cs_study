// c++로 구현하는 자료구조와 알고리즘 - 양방향 링크드 리스트 구현
#include <iostream>
#include <string>
using namespace std;

class StringNode {
private:
    string elem; // element value
    StringNode* prev; // previous item in the list
    StringNode* next; // next item in the list

    friend class StringLinkedList; // provide StringLinkedList access
};

class StringLinkedList {
public:
    StringLinkedList();
    ~StringLinkedList();
    bool empty() const;
    const string& front() const;
    const string& back() const;
    void addFront(const string& e);
    void addBack(const string& e);
    void removeFront();
    void removeBack();
private:
    StringNode* head; // head of the list
    StringNode* tail; // tail of the list
};

StringLinkedList::StringLinkedList() : head(nullptr), tail(nullptr) {}

StringLinkedList::~StringLinkedList() {
    while (!empty()) removeFront();
}

bool StringLinkedList::empty() const {
    return head == nullptr;
}

const string& StringLinkedList::front() const {
    return head->elem;
}

const string& StringLinkedList::back() const {
    return tail->elem;
}

void StringLinkedList::addFront(const string& e) {
    StringNode* v = new StringNode;
    v->elem = e;
    v->prev = nullptr;
    v->next = head;
    if (empty())
        tail = v;
    else
        head->prev = v;
    head = v;
}

void StringLinkedList::addBack(const string& e) {
    StringNode* v = new StringNode;
    v->elem = e;
    v->next = nullptr;
    v->prev = tail;
    if (empty())
        head = v;
    else
        tail->next = v;
    tail = v;
}

void StringLinkedList::removeFront() {
    if (empty()) return;
    StringNode* old = head;
    head = old->next;
    if (head == nullptr)
        tail = nullptr;
    else
        head->prev = nullptr;
    delete old;
}

void StringLinkedList::removeBack() {
    if (empty()) return;
    StringNode* old = tail;
    tail = old->prev;
    if (tail == nullptr)
        head = nullptr;
    else
        tail->next = nullptr;
    delete old;
}

int main() {
    StringLinkedList list;
    list.addFront("Hello");
    list.addFront("World");
    cout << list.front() << endl; // "World"
    cout << list.back() << endl;  // "Hello"
    list.removeFront();
    cout << list.front() << endl; // "Hello"
    list.addBack("World");
    cout << list.back() << endl; // "World"
    list.removeBack();
    cout << list.back() << endl; // "Hello"
    return 0;
}
