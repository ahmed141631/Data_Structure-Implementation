#include <iostream>
#include "Stack.h"
#include "Stack.cc"
using namespace std;

int main()
{
   Stack s1;
  int option, postion, value;

  do {
    cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. Push()" << endl;
    cout << "2. Pop()" << endl;
    cout << "3. isEmpty()" << endl;
    cout << "4. isFull()" << endl;
    cout << "5. peek()" << endl;
    cout << "6. size()" << endl;
    cout << "7. change()" << endl;
    cout << "8. printStack()" << endl;
    cout << "9. Clear Screen" << endl << endl;

    cin >> option;
    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Enter an item to push in the stack" << endl;
      cin >> value;
      s1.push(value);
      break;
    case 2:
      cout << "Pop Function Called - Poped Value: " << s1.pop() << endl;
      break;
    case 3:
      if (s1.isEmpty())
        cout << "Stack is Empty" << endl;
      else
        cout << "Stack is not Empty" << endl;
      break;
    case 4:
      if (s1.isFull())
        cout << "Stack is Full" << endl;
      else
        cout << "Stack is not Full" << endl;
      break;
    case 5:
      cout << "Peek Function Called " << s1.peek() << endl;
      break;
    case 6:
      cout << "get size Function Called - Number of Items in the Stack are: " << s1.getsize() << endl;
      break;
    case 7:
      cout << "Change Function Called - " << endl;
      cout << "Enter position of item you want to change : ";
      cin >> postion;
      cout << endl;
      cout << "Enter value of item you want to change : ";
      cin >> value;
      s1.change(postion, value);
      break;
    case 8:
      cout << "Display Function Called - " << endl;
      s1.printStack();
      break;
    case 9:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

    
    return 0;
}
