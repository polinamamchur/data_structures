//
// Created by AVzoz on 11.06.2023.
//

#ifndef TEST_LIST_H
#define TEST_LIST_H

#include <iostream>

class List {
    struct element{
        int info;
        element* next;
    } *head;
public:
    List() {head = NULL;}
    void add_to_begin(int);
    void add_to_end(int);
    void add_before(int, int);
    void add_after(int, int);
    void delete_by_info(int);
    void delete_by_index(int);
    int size();
    void print();
    int find_element(int);
};


#endif //TEST_LIST_H
