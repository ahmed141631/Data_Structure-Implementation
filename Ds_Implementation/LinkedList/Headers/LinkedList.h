#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "../Headers/Node.h"

#pragma once

class LinkedList
{
public:
    Node* head;
    LinkedList();
    LinkedList(Node* head);
    void prepend(Node* node);
    void append(Node* node);
    void insertNodeAfter(int key,Node* node);
    void remove(int key);
    
    // utility functions
    Node *NodeExists(int key);
    void print();
    ~LinkedList();

private:

};

#endif
