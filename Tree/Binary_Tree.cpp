//
// Created by AVzoz on 28.05.2023.
//

#include "Binary_Tree.h"

void Binary_Tree::stright_create() {
    int a;
    std::cin >> a;
    if(a == 0){
        element = NULL;
        return;
    }
    element = new Element;
    element->info = a;
    element->left = new Binary_Tree;
    element->right = new Binary_Tree;
    element->left->stright_create();
    element->right->stright_create();
}

void Binary_Tree::stright_print(){
    if(element == NULL){
        std::cout << "0 "; // за бажанням
        return;
    }
    std::cout << element->info << " ";
    element->left->stright_print();
    element->right->stright_print();
}

void Binary_Tree::symetric_print() {
    if(element == NULL){
        std::cout << "0 "; // за бажанням
        return;
    }
    element->left->stright_print();
    std::cout << element->info << " ";
    element->right->stright_print();
}

void Binary_Tree::reverse_print() {
    if(element == NULL){
        std::cout << "0 "; // за бажанням
        return;
    }
    element->left->stright_print();
    element->right->stright_print();
    std::cout << element->info << " ";
}

