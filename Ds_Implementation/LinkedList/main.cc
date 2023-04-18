#include <iostream>
#include "Headers/Node.h"
#include "Sources/Node.cc"
#include "Headers/LinkedList.h"
#include "Sources/LinkedList.cc"
using namespace std;

int main()
{
    Node *node = new Node(1,2);
   LinkedList *list = new LinkedList(node);
    list->append(new Node(3,4));
    list->append(new Node(5,6));
    list->print();
    list->insert(2,new Node(7,8));
    list->print();
    
    return 0;
}
