#include "../Headers/Node.h"

Node::Node()
{
    this->key = 0;
    this->value = 0;
    this->next = nullptr;
}
Node::Node(int key, int value){
    this->key = key;
    this->value = value;
    this->next = nullptr;
}
void Node::setKey(int key){
    this->key = key;
}
int Node::getKey(){
    return this->key;
}
void Node::setValue(int value){
    this->value = value;
}
int Node::getValue(){
    return this->value;
}

Node::~Node()
{

}