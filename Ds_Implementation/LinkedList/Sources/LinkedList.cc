#include "../Headers/LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
    this->head = nullptr;
}
LinkedList::LinkedList(Node* head){
    this->head = head;
}
Node* LinkedList::NodeExists(int key){
     Node * temp = nullptr;
     Node * ptr = this->head;
     while(ptr != nullptr){
         if(ptr->getKey() == key){
             temp = ptr;
             break;
         }
         ptr = ptr->next;
     }
    return temp;
}
void LinkedList::append(Node* node){
    if(NodeExists(node->getKey())!=nullptr){
        cout<<"Node already exists"<<endl;
    }else{
        if(this->head==nullptr){
            this->head = node;
            cout<<"Node appended"<<endl;
        }else{
            Node * ptr = this->head;
            while(ptr->next!=nullptr){
                ptr = ptr->next;
            }
            ptr->next = node;
            cout<<"Node appended"<<endl;
        }
    }
}

//insert node at the start of the list

void LinkedList::prepend(Node* node){
    if(NodeExists(node->getKey())!=nullptr){
        cout<<"Node already exists"<<endl;
    }else{
        if(this->head==nullptr){
            this->head = node;
            cout<<"Node prepended"<<endl;
        }else{
            node->next = this->head;
            this->head = node;
            cout<<"Node prepended"<<endl;
        }
    }
}

void LinkedList::insert(int key,Node* node){
    if(NodeExists(key)!=nullptr){
        cout<<"Node already exists"<<endl;
    }else{
        if(this->head==nullptr){
            this->head = node;
            cout<<"Node inserted"<<endl;
        }else{
            Node * ptr = this->head;
            while(ptr->next!=nullptr){
                ptr = ptr->next;
            }
            ptr->next = node;
            cout<<"Node inserted"<<endl;
        }
    }
}

void LinkedList::remove(int key){
    if(this->head==nullptr){
        cout<<"List is empty"<<endl;
    }else if(this->head!=nullptr){
        if (head -> getKey() == key) {
        head = head -> next;
        cout << "Node UNLINKED with keys value : " << key << endl;
        }else{
            Node * temp = NULL;
        Node * prevptr = head;
        Node * currentptr = head -> next;
        while (currentptr != NULL) {
          if (currentptr -> getKey() == key) {
            temp = currentptr;
            currentptr = NULL;
          } else {
            prevptr = prevptr -> next;
            currentptr = currentptr -> next;
        }
        }
        if (temp != NULL) {
          prevptr -> next = temp -> next;
          cout << "Node UNLINKED with keys value : " << key << endl;
        } else {
          cout << "Node Doesn't exist with key value : " << key << endl;
        }
    }
    }

}
void LinkedList::print(){
    if(this->head==nullptr){
        cout<<"List is empty"<<endl;
    }else {
    Node * ptr = this->head;
    while(ptr!=nullptr){
        cout<<ptr->getKey()<<" "<<ptr->getValue()<<endl;
        ptr = ptr->next;
    }
    }
}

LinkedList::~LinkedList()
{
    cout<<"Destructor called"<<endl;
}