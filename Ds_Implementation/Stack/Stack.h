#ifndef STACK_H
#define STACK_H

#pragma once

class Stack
{
public:
    Stack();
    void push(int data);
    int pop();
    bool isEmpty();
    bool isFull();
    int peek();
    void change(int pos,int val);
   

    //utilty methods
    void setSize(int size);
    int getTop();
    int getsize();
    void printStack();

    ~Stack();
    

private:
    int top;
    int size;
    int arr[100];
    

};

#endif