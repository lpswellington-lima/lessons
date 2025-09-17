#include <iostream>
#include <lesson19.h>

using namespace std;

void Lesson19::onExecute(){
    PRINT("Lesson 19");
    LinkedList list;
    LinkedList list2;
    list2.insertAtTail(1);
    list2.insertAtTail(2);
    list2.insertAtTail(3);
    list2.insertAtTail(4);
    list.insertAtHead(10);
    list.insertAtHead(20);
    list.insertAtTail(5);
    list.insertAtTail(3);
    list.insertAtPosition(80,0);
    list.deleteAtHead();
    list.deleteAtTail();
    list.deleteAtPos(1);
    list2.PrintList();
    // list.PrintList();
    // list = list2;
    LinkedList list3 = list + list2;
    list3.PrintList();
}

void LinkedList::insertAtHead(int value){
    Node* newNode = new Node{value, nullptr};
    newNode->next = head;
    head = newNode;
    size++;
}

void LinkedList::insertAtTail(int value){
    Node* newNode = new Node{value, nullptr};
    auto findTail = [](Node*& current){
        while(current->next != nullptr){
            current = current->next;
        }
    };
    if (head == nullptr){
        head = newNode;
    }else{
        Node* current = head;
        findTail(current);
        current->next = newNode;
    }
    size++;
}

void LinkedList::insertAtPosition(int value, int pos){
    Node* posNode = head;
    Node* aux;
    if(pos > size){
        PRINT_ERROR("Pos longer than size of the list!");
        return;
    }
    if(pos == 0){
        insertAtHead(value);
    }else{      
        Node* newNode = new Node{value, nullptr};
        for (int i = 0; i < pos; i++)
        {
            PRINT("Pos Node: " << posNode->data);
            if (i + 1 == pos)
            {
                aux = posNode->next;
                newNode->next = aux;
                posNode->next = newNode;
                size++;
                break;
            }
            posNode = posNode->next;
        }
    }    
}

void LinkedList::deleteAtHead(){
    Node* temp = head;
    if (temp != nullptr && temp->next != nullptr){
        head = head->next;
        delete temp;
        size--;
    }
}

void LinkedList::deleteAtTail(){
    Node* temp = head;
    for(int i=0; i < size; i++){
        if(temp->next->next == nullptr){
            delete temp->next;
            temp->next = nullptr;
            size--; 
            break;
        }else {
            temp = temp->next;
        }
    }
}

void LinkedList::deleteAtPos(int pos){
    Node* temp = head;
    if (pos > size){
        PRINT_ERROR("Position can't be bigger than size");
        return;
    }
    auto getToPos = [&temp](int p){
        for(int i = 0; i < p - 1; i++){
            temp = temp->next;
        }
    };
    if(pos==0){
        deleteAtHead();
    }else{
        Node* aux;
        getToPos(pos);
        aux = temp->next;
        temp->next = temp->next->next;
        delete aux;
        size--;
    }
}

void LinkedList::PrintList(){
    Node* current = head;
    int i = 0;
    while(current != nullptr){
        PRINT("Data stored in postion: " << i << " is: " << current->data);
        i++;
        current = current->next;
    }
}

void LinkedList::clear(){
    int i = 0;
    if (head == nullptr){
        PRINT("It is already fucking empty");
    }
    while(head != nullptr){
        Node* release = head;
        head = head->next;
        PRINT("deleting pointer: " << release << " with data: " << release->data);
        delete release;
    }
    if (head == nullptr){
        PRINT("It is fucking empty");
    }
    size = 0;
}

bool LinkedList::isEmpty(){
    return (head == nullptr) ? true : false;
}

int LinkedList::getPos(int pos){
    Node* temp = head;
    if (pos > size){
        PRINT_ERROR("Position can't be bigger than size");
        return 0;
    }
    for (int i = 0; i < pos; i++){
        temp = temp->next;
    }
    return temp->data;
}

int LinkedList::getSize(){
    return size;
}

void LinkedList::operator=(LinkedList& l){
    clear();
    int s = l.getSize();
    for (int i = 0 ; i < s ; i++){
        int data = l.getPos(i);
        insertAtTail(data);
    }
}

LinkedList LinkedList::operator+(LinkedList& l){
    LinkedList sumList;
    for (int i = 0 ; i < size ; i++){
        int data = getPos(i);
        sumList.insertAtTail(data);
    }
    int s = l.getSize();
    for (int i = 0 ; i < s ; i++){
        int data = l.getPos(i);
        sumList.insertAtTail(data);
    }
    return sumList;
}

LinkedList::~LinkedList(){
    clear();
}

