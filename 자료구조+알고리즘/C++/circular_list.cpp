// c++로 구현하는 자료구조와 알고리즘 - 단일 링크드 리스트 구현
#include <iostream>
#include <string>
using namespace std;

template <typename Elem>
class CNode {
private:
	Elem elem;
	CNode* next;

	friend class CircleList;
};
class CircleList {
public:
	CircleList();
	~CircleList();
	bool empty() const;
	const Elem& front() const;
	const Elem& back() const;
	void advance();
	void add(const Elemt& e);
	void remove();
private:
	CNode* cursor;
};

CircleList::CircleList() // constructor
	:cursor(NULL) {}
CircleList::~CircleList() // destructor
{ while (!empty()) remove(); }

bool CircleList::empty() const // is list empty?
{ return cursor == NULL; }
const Elem& CircleList::front() const // element at cursor
{ return cursor->elem; }
const Elem& CircleList::back() const // element following curosr
{ return cursor->next->elem; }
void CircleList::advance() // advance cursor
{ cursor = cursor->next; }

void CircleList::add(const Elemt& e) // add after cursor
{
	CNode* v = new CNode;
	v->elem = e;
	if (cursor == NULL) {
		v->next = v;
		cursor = v;
	}
	else {
		v->next = cursor->next;
		cursor->next = v;
	}
}
void CircleList::remove() // remove node after cursor
{
	CNode* old = cursor->next;
	if (old == cursor)
		cursor == NULL;
	else
		cursor->next = old->next;
	delete old;
}

int main()
{
	CircleList playList;
	playList.add("Stayin Alive");
	playList.add("Le Freak");
	playList.add("Jive Talkin");

	playList.advance();
	playList.advance();
	playList.remove();
	playList.add("Disco Inferno");
	return EXIT_SUCCESS;
}