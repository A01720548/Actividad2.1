/**
 * @file LinkedList.h
 * @author Esteban de la Maza , Ricardo Jasso , Raul Jerlach
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
 * Complexity: O(1)
 */
LinkedList::LinkedList()
{
    head = nullptr;
    size = 0;
}

/**
 * @brief Get the Size of the list
 * 
 * @return the size of the list
 * Complexity: O(1) 
 */
int LinkedList:: getSize() {
    return size;
}

/**
 * @brief Adds new node at start of list
 * 
 * @param datum Value of content in new node
 * Complexity: O(1)
 */
void LinkedList:: push(int datum) {
    Node *pnewboy = new Node(datum);
    pnewboy->nextboy = head;
    head = pnewboy;
    size++;
}

/**
 * @brief Adds a new Node to the end of the list
 * 
 * @param datum Value of content of new node
 * Complexity: O(n)
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

/**
 * @brief Returns value in position entered
 * 
 * @param pos Position that user wants to read
 * 
 * @return the value kept in that node, -1 if that position is not in the list
 * Complexity: O(n)
 */
int LinkedList:: read(int pos)
{
    Node *pcurrentboy;
    pcurrentboy = head;
    int cont = 0;

    int retval = -1;

    if (pos == 0)
    {
        retval = pcurrentboy->content;
        return retval;
    }
    else
    {
        while (pcurrentboy->nextboy != nullptr)
        {
            pcurrentboy = pcurrentboy->nextboy;
            cont++;
            if (pos == cont)
            {
                retval = pcurrentboy->content;
                return retval;
            }
        }

    }
    return retval;
}

/**
 * @brief Updates Node's values
 * 
 * @param pos Position of node that is going to change
 * @param newValue New value of nodes content
 * Complexity: O(n)
 */
void LinkedList ::update(int pos, int newValue)
{
    Node *pcurrentboy;
    pcurrentboy = head;
    int cont = 0;

    if (pos == 0)
    {
        pcurrentboy->content = newValue;
    }else {
        while (pcurrentboy->nextboy != nullptr)
        {
            cont++;
            pcurrentboy = pcurrentboy->nextboy;
            if (cont == pos)
            {
                pcurrentboy->content = newValue;
            }
        }
    }
}

/**
 * @brief Deletes Node from the list
 * 
 * @param pos Position of Node that will be deleted 
 * Complexity: O(n)
 */
void LinkedList ::del(int pos) {
    Node *pcurrentboy;
    Node *previousboy;
    pcurrentboy = head;

    int cont = 0;

    if (pos == 0)
    {
        pcurrentboy->~Node();
    }else {
        while (pcurrentboy->nextboy != nullptr)
        {
            cont++;
            previousboy = pcurrentboy;
            pcurrentboy = pcurrentboy->nextboy;
            if (cont == pos)
            {
                previousboy->nextboy = pcurrentboy->nextboy;
                pcurrentboy->~Node();
            }
        }
    }
    size--;
}

/**
 * @brief Prints Nodes
 * Complexity: O(n)
 * 
 */
void LinkedList:: print() {
    Node *pcurrentboy;
    pcurrentboy = head;

    while (pcurrentboy->nextboy != nullptr)
        {
            std::cout << pcurrentboy->content << std::endl;
            pcurrentboy = pcurrentboy->nextboy;
        }
    std::cout << pcurrentboy->content << std::endl;
    
}