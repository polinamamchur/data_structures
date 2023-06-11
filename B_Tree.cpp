//
// Created by Polina on 11.06.2023.
//

#include "B_Tree.h"
#include <iostream>

using namespace std;

void B_Tree::stright_create(){
    int a;
    cin >> a;
    if(a == 0){
        element = NULL;
        return;
    }
    element = new Element;
    element->info = a;
    element->left = new B_Tree;
    element->right = new B_Tree;
    element->left->stright_create();
    element->right->stright_create();
}
void B_Tree::symetric_create(){
    int a;
    cin >> a;
    if (a == 0) {
        element = NULL;
        return;
    }
    element = new Element;
    element->left = new B_Tree;
    element->left->symetric_create();
    element->info = a;
    element->right = new B_Tree;
    element->right->symetric_create();
}
void B_Tree::stright_print(){
    if(element == NULL){
        cout << "0 "; // за бажанням
        return;
    }
    cout << element->info << " ";
    element->left->stright_print();
    element->right->stright_print();
}
void B_Tree::symetric_print(){
    if (element == NULL) {
        cout << "0 "; // за бажанням
        return;
    }
    element->left->symetric_print();
    cout << element->info << " ";
    element->right->symetric_print();
}
void B_Tree::reverse_print(){
    if (element == NULL) {
        cout << "0 "; // за бажанням
        return;
    }
    element->left->symetric_print();
    element->right->symetric_print();
    cout << element->info << " ";
}



