//
// Created by AVzoz on 28.05.2023.
//

#ifndef TEST_BINARY_TREE_H
#define TEST_BINARY_TREE_H

#include <iostream>

class Binary_Tree{
    struct Element{
        int info;
        Binary_Tree* left;
        Binary_Tree* right;
    } *element;
public:
    Binary_Tree(){ element = NULL;}
    void stright_create();
    void stright_print();
    void symetric_print();
    void reverse_print();
};


#endif //TEST_BINARY_TREE_H
