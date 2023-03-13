#include <iostream>
#include <string>
#include "LinkedList.h"

int main() 
{
    LinkedList<int> ll;

    if (ll.search(56) == -1)
    {
        std::cout << "56 not found" << std::endl;
    }
    else
    {
        std::cout << "56 found" << std::endl;
    }
    
    ll.insertFront(56);
    ll.insertBack(7);

    std::cout << (ll.search(7) != -1 ? "7 found" : "7 not found") << std::endl;
    std::cout << "Linked List: " << ll.display() << std::endl;

    ll.insertBack(4);
    ll.insertBack(8);
    ll.insertBack(12);
    ll.insertBack(99);

    std::cout << "Linked List: " << ll.display() << std::endl;

    ll.deleteAt(2);
    std::cout << "Linked List: " << ll.display() << std::endl;

    ll.deleteAt(2);
    std::cout << "Linked List: " << ll.display() << std::endl;

    return 0;
}
