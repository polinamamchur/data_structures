//
// Created by AVzoz on 18.06.2023.
//

#include "Balanced_Tree.h"
#include <iostream>
#include <algorithm>

using namespace std;

Balanced_Tree::Balanced_Tree() {
    pElement = NULL;
}

int Balanced_Tree::getDepth() {
    if(pElement == NULL)
        return 0;
    return 1 + max(pElement->right->getDepth(), pElement->left->getDepth());
}

void Balanced_Tree::create() {
    int a;
    cin >> a;
    while (a != 0)  // костиль
    {
        this->addElement(a);
        cin >> a;
    }
}

void Balanced_Tree::addElement(int a) {
    if(pElement == NULL){
        pElement = new Element;
        pElement->info = a;
        pElement->left = new Balanced_Tree;
        pElement->right = new Balanced_Tree;
    } else{
        if(pElement->left->getDepth() >= pElement->right->getDepth())
            pElement->right->addElement(a);
        else
            pElement->left->addElement(a);
    }
}
