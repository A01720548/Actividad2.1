#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList myList = LinkedList();
    myList.push(42);
    myList.push(360);
    //std::cout << myList.getSize() << std::endl;

    myList.append(23);
    myList.append(12);
    myList.print();

    myList.update(1,20);
    myList.print();

    myList.del(1);
    myList.print();

    std::cout << "Size of List: " << myList.getSize() << std::endl;


    std::cout << myList.read(1);
    

    return 0;
}