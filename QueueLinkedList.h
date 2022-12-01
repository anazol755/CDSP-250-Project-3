//  QueueLinkedList.h .h
//  Created by Amir Gawish on 10/26/22.

#ifndef QueueLinkedList_h__h
#define QueueLinkedList_h__h
template <typename QueueElement> class Queue {
private:
    struct QueueNode {
        QueueNode* value;
        struct QueueNode* next;
    };
    QueueNode* front;
    QueueNode* rear;
    int numItems;

public:
    Queue();
    void enqueue(const QueueElement & value);
    void dequeue();
    bool isEmpty() const;
    void display();
};
#endif /* QueueLinkedList_h__h */
