#include "node.h"

#ifndef LINKED_LIST_H
#define LINKED_LIST_H


class LinkedList {
    public:
    Node* head;

    LinkedList(int value);
    LinkedList(int* values, int n_values);
    void remove_node(int value);
    void remove_duplicates();
    void add_node(int value);
    Node* find_node(int value);
    void print();
};

#endif