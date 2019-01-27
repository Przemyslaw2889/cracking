#include "node.h"
#include <iostream>
#include <cstddef>


Node::Node(int value, Node*next)
{
    this->value = value;
    this->next = next;
}

Node::Node(int value)
{
    this->value = value;
    this->next = NULL;
}