#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack()
{
    top = -1;
    cout<<"what is the numbre of the stack : ";
    int x=0; cin>>x;
    this->setSize(x);
    
    for(int i=0; i<this->getsize(); i++){
      arr[i]=0;
    }
}

bool Stack::isEmpty(){
    if(this->top==-1){
        return true;
    }
    else{
        return false;
    }
}
bool Stack::isFull(){
    if(this->top==this->size-1){
        return true;
    }
    else{
        return false;
    }
}
void Stack::setSize(int size){
    this->size=size;
    
}
int Stack::getTop(){
    return top;
}
int Stack::getsize(){
    return size;
}
void Stack::printStack(){
    for(int i=0; i<this->size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void Stack::push(int data){
    if(!isFull()){
        top++;
        arr[top]=data;
    }
    else{
        cout<<"stack is full"<<endl;
    }
}
int Stack::pop(){
    if(!isEmpty()){
        int x=arr[top];
        top--;
        return x;
    }
    else{
        cout<<"stack is empty"<<endl;
    }
}
int Stack::peek(){
    if(!isEmpty()){
        return arr[top];
    }
    else{
        cout<<"stack is empty"<<endl;
    }
}
void Stack::change(int pos,int val){
    arr[pos]=val;
    cout<<"value changed at postion "<<pos<<endl;
}


Stack::~Stack()
{
    cout<<"Destructor called"<<endl;
}