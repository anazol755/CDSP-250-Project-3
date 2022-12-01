//  main.cpp
//  CSDP 250 Project 3
//  Created by Amir Gawish on 10/26/22.

#include <iostream>
#include <string>
#include "QueueLinkedList.h"
using namespace std;



int main()
{
    Queue <char> Q;
    char* st = new char[99];
    char* temp = new char[99];
    string str;
    int i = 0;

    cout << "Please enter a word or a sentence and it will switch from upercase to lowercase or lowercase to upercase "<< endl;
    cin.getline(st, sizeof(st));


    for (i = 0; i < sizeof(st); i++) {
        Q.enqueue(st[i]);
        if (isupper(st[i])) {
            st[i] = tolower(st[i]);
        }
        else {
            st[i] = toupper(st[i]);
        }
        temp[i] = st[i];
        st++;
    }

    for (i = 0; i < sizeof(st); i++) {
        Q.enqueue(temp[i]);
        temp++;
    }
    delete[] st;
    delete[] temp;
    Q.display();
    while (!Q.isEmpty()) {
        Q.dequeue();
    }
    system("PAUSE");
}
