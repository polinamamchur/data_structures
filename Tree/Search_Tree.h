//
// Created by AVzoz on 11.06.2023.
//

#ifndef TEST_SEARCH_TREE_H
#define TEST_SEARCH_TREE_H

#include <iostream>
using namespace std;

class Search_Tree {
protected:
    struct Element{
        int info;
        Search_Tree* left;
        Search_Tree* right;
    } *element;
public:
    Search_Tree() {element = NULL;}
    void create();
    void add_element(int);
    void print();
    void delete_element(int);
};


#endif //TEST_SEARCH_TREE_H
