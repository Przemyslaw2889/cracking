#include "linked_list.h"
#include "node.h"
#include <iostream>
#include <cstddef>


LinkedList::LinkedList(int value) {
    Node* head = new Node(value);
    this->head = head;
}

LinkedList::LinkedList(int* values, int n) {
    Node* head = new Node(values[0]);
    this->head = head;
    Node* current = head;
    for (int i = 1; i < n; i++) {
        Node* next = new Node(values[i]);
        current->next = next;
        current = current->next;
    }
}

void LinkedList::add_node(int value) {
    Node* last = new Node(value);
    Node* current = this->head;
    while(current->next != NULL) {
        current = current->next;
    }
    current->next = last;
}

// Removes first nodes with given value
void LinkedList::remove_node(int value) {
    Node* previous = NULL;
    Node* current = this->head;
    while (current != NULL) {
        if (current->value == value) {
            if (previous)
                previous->next = current->next;
            else
                this->head = current->next;
            return;
        }
        previous = current;
        current = current->next;
    }
}

// returns first occurence of Node with given value (NULL if there isn't any)
Node* LinkedList::find_node(int value) {
    Node* current = this->head;
    while (current) {
        if (current->value == value) {
            return current;
        }
    }
    return NULL;
}

void LinkedList::print() {
    Node* current = this->head;
    
    while (current != NULL) {
        std::cout << current->value << " ";
        current = current->next;
    }
    std::cout << std::endl;
}