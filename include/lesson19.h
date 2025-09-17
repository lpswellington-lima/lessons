#ifndef LESSON19_H
#define LESSON19_H
#include <config.h>

using namespace std;

class Lesson19 : public Lesson{ 
    public:       
        void onExecute();        
};

class LinkedList {
    private:
        struct Node
        {
            int data;
            Node *next;
        };
        Node* head = nullptr;
        int size = 0;
    public:
        ~LinkedList();
        void insertAtHead(int value);
        void insertAtTail(int value);
        void insertAtPosition(int value, int pos);
        void deleteAtHead();
        void deleteAtTail();
        void deleteAtPos(int pos);
        void clear();
        bool isEmpty();
        int getPos(int pos);
        int getSize();
        void operator=(LinkedList& l);
        LinkedList operator+(LinkedList& l);
        void PrintList();
};

#endif