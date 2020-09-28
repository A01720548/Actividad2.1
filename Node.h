/**
 * @file Node.h
 * @author Esteban de la Maza , Ricardo Jasso , Raul Jerlach
 * @brief Node class for data structures class
 * @version 0.1
 * @date 2020-09-24
 * 
 * @copyright Copyright (c) 2020
 * 
 */

class Node
{
public:
    int content;
    Node *nextboy;

    Node(int datum);
    ~Node();
};

/**
 * @brief Construct a new Node:: Node object
 * 
 * @param datum 
 */
Node::Node(int datum) {
    content = datum;
    nextboy = nullptr;

}

/**
 * @brief Construct a new Node:: Node object, default without parameters
 * 
 */
Node::~Node() 
{
    content = NULL;
    nextboy = nullptr;
}