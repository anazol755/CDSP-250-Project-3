//  QueueLinkedList.cpp
//  Created by Amir Gawish on 10/26/22.

#include <stdio.h>
#include <iostream>
#include "QueueLinkedList.h"
using namespace std;

template <typename QueueElement> Queue<QueueElement>::Queue() {
    front = NULL;
    rear = NULL;
    numItems = 0;
}

template <typename QueueElement> bool Queue<QueueElement>::isEmpty() const {
    if (front == rear) {
        cout << "The linked list is empty." << endl;
    }
}

template <typename QueueElement> void Queue<QueueElement>::enqueue(const QueueElement& value) {
    
    QueueNode* newNode;
    newNode = new QueueNode;
    newNode->value = value;
    newNode->next = nullptr;

    if (isEmpty()) {
        front = newNode;
        rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }
    ++numItems;
}



template <typename QueueElement> void Queue<QueueElement>::display() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
    }else{
        QueueNode* ptr = front;
        while (ptr != NULL) {
            cout << ptr->value << " ";
            ptr = ptr->next;
            }
        }
}

template <typename QueueElement> void Queue<QueueElement>::dequeue() {
    QueueNode* temp = nullptr;
    if (isEmpty()) {
        cout << "The queue is empty." << endl;
    }else {
        temp->value = front->value;
        temp = front;
        front = front->next;
        delete temp;

        --numItems;
    }
}
