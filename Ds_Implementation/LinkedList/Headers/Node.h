#ifndef NODE_H
#define NODE_H

#pragma once

class Node
{
public:
    
    Node();
    Node(int key, int value);
    ~Node();
    void setKey(int key);
    int getKey();
    void setValue(int value);
    int getValue();
     Node* next;

private:
    int key;
    int value;
   

};

#endif