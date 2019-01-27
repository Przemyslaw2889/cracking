#include "node.h"
#include "linked_list.h"
#include <iostream>


int main() {
    int n = 8;
    int values[8] = {1, 2, 3, 4, 5, 17, 8, 20};
    LinkedList list(values, n);
    std::cout << "List after creation" << std::endl;
    list.print();

    list.add_node(777);
    std::cout << "List after after adding 777" << std::endl;
    list.print();

    list.remove_node(5);
    std::cout << "List after after removing 5" << std::endl;
    list.print();

    list.remove_node(1);
    std::cout << "List after removing 1 (head value)" << std::endl;
    list.print();

}