//
// Created by AVzoz on 18.06.2023.
//

#ifndef ALGORYTHMS_BALANCED_TREE_H
#define ALGORYTHMS_BALANCED_TREE_H


class Balanced_Tree {
    struct Element{
        int info;
        Balanced_Tree* left;
        Balanced_Tree* right;
    } *pElement;
public:
    Balanced_Tree();
    int getDepth();
    void create();
    void addElement(int);
};


#endif //ALGORYTHMS_BALANCED_TREE_H
