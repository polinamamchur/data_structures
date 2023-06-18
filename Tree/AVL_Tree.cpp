//
// Created by AVzoz on 18.06.2023.
//

#include "AVL_Tree.h"
#include <algorithm>

void AVL_Tree::add_element(int a) {
    if(a == 0) return; // опціонально
    if(pElement){
        if(a > pElement->info)
            pElement->right->add_element(a);
        if(a < pElement->info)
            pElement->left->add_element(a);
    } else{
        pElement = new Element;
        pElement->info = a;
        pElement->left = new AVL_Tree;
        pElement->right = new AVL_Tree;
    }
}

void AVL_Tree::create() { // 10 1 15 13 17 19 0
    int a;
    cin >> a;
    while (a != 0)  // костиль
    {
        this->add_element(a);
        this->Balance();
        cin >> a;
    }
}

int AVL_Tree::getDepth() {
    if(pElement == NULL)
        return 0;
    return 1 + max(pElement->right->getDepth(), pElement->left->getDepth());
}

void AVL_Tree::Balance() {
    if(pElement->left->getDepth() - pElement->right->getDepth() == 2){
        if(pElement->left->pElement->right <= pElement->left->pElement->left)
            this->small_right();
        else
            this->big_right();
    }
    if(pElement->right->getDepth() - pElement->left->getDepth() == 2){
        if(pElement->right->pElement->left <= pElement->right->pElement->right)
            this->small_left();
        else
            this->big_left();
    }
}

void AVL_Tree::small_left() {
    auto memory = pElement->right->pElement->left->pElement;
    pElement->right->pElement->left->pElement = this->pElement;
    pElement = pElement->right->pElement;
    pElement->left->pElement->right->pElement = memory;
}
