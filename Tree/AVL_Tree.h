//
// Created by AVzoz on 18.06.2023.
//

#ifndef ALGORYTHMS_AVL_TREE_H
#define ALGORYTHMS_AVL_TREE_H


#include "Search_Tree.h"

class AVL_Tree{
protected:
    struct Element{
        int info;
        AVL_Tree* left;
        AVL_Tree* right;
    } *pElement;
public:
    void create();
    void add_element(int);
    void Balance();
    int getDepth();
    void small_left();
    void small_right(){ return;};
    void big_left(){return;};
    void big_right(){return;};

public:
    AVL_Tree(){
        pElement = NULL;
    }
};


#endif //ALGORYTHMS_AVL_TREE_H
