// CircularQueue.h: 배열을 이용한 원형 큐 클래스
//#include "CircularQueue.h"
#include <iostream>

#include <iostream>
#include <cstdio>
#include <cstdlib>
#define MAX_QUEUE_SIZE 100

inline void error(const char* str){
    std::cout << "error";
    exit(1);
}

class CircularQueue{
protected:
    int front;
    int rear;
    int data[MAX_QUEUE_SIZE];
public:
    CircularQueue(){front = rear = 0;}
    bool isEmpty(){return front == rear;}
    bool isFull(){return (rear+1)%MAX_QUEUE_SIZE == front;}
    void enqueue(int val){
        if(isFull())
            error(" error: 큐가 포화상태입니다.\n");
        else{
            rear = (rear+1) % MAX_QUEUE_SIZE;
            data[rear] = val;
        }
    }
    int dequeue(){
        if(isEmpty())
            error(" Error: 큐가 공백상태입니다.\n");
        else{
            front = (front+1) % MAX_QUEUE_SIZE;
            return data[front];
        }
    }
    int peek(){
        if(isEmpty())
            error(" Error: 큐가 공백상태입니다.\n");
        else   
            return data[(front+1) % MAX_QUEUE_SIZE];
    }
    void display(){
        std::cout << "큐 내용: ";
        int maxi = (front < rear) ? rear : rear+MAX_QUEUE_SIZE;
        for(int i=front+1; i<=maxi; i++)
            std::cout << data[i%MAX_QUEUE_SIZE] << " ";
        std::cout << "\n";
    }
};

int main() {
    CircularQueue q;
    for(int i=1; i<10; i++)
        q.enqueue(i);
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();
    return 0;
}
