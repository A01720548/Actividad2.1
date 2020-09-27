/**
 * @file LinkedList.h
 * @author Esteban de la Maza (A01720548@itesm.com)
 * @brief Linked List class for data structures class
 * @version 0.1
 * @date 2020-09-24
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "Node.h"
class LinkedList
{
private:
    Node *head;
    int size;

public:
    LinkedList();
    int getSize();
    void push(int datum);
    void append(int datum);
    int read(int datum);
    void update(int, int);
    void del(int datum);
    void print();


};

/**
 * @brief Construct a new Linked List:: Linked List object
 * 
 */
LinkedList::LinkedList()
{
    head = nullptr;
    size = 0;
}

/**
 * @brief Get the Size of the list
 * 
 * @return int 
 */
int LinkedList:: getSize() {
    return size;
}

void LinkedList:: push(int datum) {
    Node *pnewboy = new Node(datum);
    pnewboy->nextboy = head;
    head = pnewboy;
    size++;
}

/**
 * @brief Adds a new Node to the end of the list
 * 
 * @param datum 
 */
void LinkedList::append(int datum) 
{
    Node *pnewboy = new Node(datum);
    Node *pcurrentboy;
    pcurrentboy = head;

    if(head == nullptr) {
        head = pnewboy;
    } else {
        while (pcurrentboy->nextboy != nullptr) {
            pcurrentboy = pcurrentboy->nextboy;
        }
        pcurrentboy->nextboy = pnewboy;
    }
    size++;
}

int LinkedList ::read(int datum)
{
    Node *pnewboy = new Node(datum);
    Node *pcurrentboy;
    pcurrentboy = head;
    int cont = 0;

    int retval = -1;

    if (head == nullptr && pcurrentboy->content == datum)
    {
        retval = cont;
        return retval;
    }
    else
    {
        while (pcurrentboy->nextboy != nullptr)
        {
            pcurrentboy = pcurrentboy->nextboy;
            cont++;
            if (pcurrentboy->content == pnewboy->content)
            {
                retval = cont;
                return retval;
            }
        }

    }
}

void LinkedList ::update(int oldValue, int newValue)
{
    Node *pnewboy = new Node(oldValue);
    Node *pcurrentboy;
    pcurrentboy = head;

    while (pcurrentboy->nextboy != nullptr)
    {
        pcurrentboy = pcurrentboy->nextboy;
        if (pcurrentboy->content == pnewboy->content)
        {
            pcurrentboy->content = newValue;
        }
    }
}

void LinkedList ::del(int datum) {
    Node *pnewboy = new Node(datum);
    Node *pcurrentboy;
    Node *previousboy;
    pcurrentboy = head;

    if (head == nullptr)
    {
        pcurrentboy->~Node();
    }else {
        while (pcurrentboy->nextboy != nullptr)
        {
            previousboy = pcurrentboy;
            pcurrentboy = pcurrentboy->nextboy;
            if (pcurrentboy->content == pnewboy->content)
            {
                previousboy->nextboy = pcurrentboy->nextboy;
                pcurrentboy->~Node();
            }
        }
    }
    size--;
}

void LinkedList:: print() {
    Node *pcurrentboy;
    pcurrentboy = head;

    while (pcurrentboy->nextboy != nullptr)
        {
            std::cout << pcurrentboy->content << std::endl;
            pcurrentboy = pcurrentboy->nextboy;
        }
    
    
}
