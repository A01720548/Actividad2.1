#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList myList = LinkedList();
    myList.push(42);
    myList.push(360);
    //std::cout << myList.getSize() << std::endl;

    myList.append(23);
    myList.append(12);
    //std::cout << myList.getSize() << std::endl;
    //myList.print();

    std::cout << myList.read(23);
    myList.del(42);
    //std::cout << myList.getSize() << std::endl;
    //myList.print();

    return 0;
}