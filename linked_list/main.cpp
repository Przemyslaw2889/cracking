#include "node.h"
#include "linked_list.h"
#include <iostream>


int main() {
    int n = 12;
    int values[12] = {1, 2, 2, 2, 3, 4, 5, 2, 17, 8, 5, 20};
    LinkedList list(values, n);
    std::cout << "List after creation:" << std::endl;
    list.print();

    list.add_end_node(777);
    std::cout << "List after after adding 777 at the end:" << std::endl;
    list.print();

    list.add_node(888);
    std::cout << "List after after adding 888:" << std::endl;
    list.print();

    list.remove_node(5);
    std::cout << "List after after removing 5:" << std::endl;
    list.print();

    list.remove_node(1);
    std::cout << "List after removing 1 (head value):" << std::endl;
    list.print();

    list.remove_duplicates();
    std::cout << "List after removing duplicates:" << std::endl;
    list.print();

    Node* k_last = list.k_from_back(4);
    std::cout << "4 last element:" << std::endl;
    std::cout << k_last->value << std::endl << std::endl;

}