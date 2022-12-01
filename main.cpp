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

    cout << "Hello, I switch the uppercase and lowercase letters of the input you enter. " << endl;
    cout << "Please enter a word or a sentence: ";
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
