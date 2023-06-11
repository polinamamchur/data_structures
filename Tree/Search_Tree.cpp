//
// Created by AVzoz on 11.06.2023.
//

#include "Search_Tree.h"

void Search_Tree::create(){
    int a;
    cin >> a;
    while (a != 0)  // костиль
    {
        this->add_element(a);
        cin >> a;
    }
}

void Search_Tree::add_element(int a){
    if(a == 0) return; // опціонально
    if(element){
        if(a > element->info)
            element->right->add_element(a);
        if(a < element->info)
            element->left->add_element(a);
    } else{
        element = new Element;
        element->info = a;
        element->left = new Search_Tree;
        element->right = new Search_Tree;
    }
}

void Search_Tree::print(){
    if(element == NULL) return;
    element->left->print();
    cout << element->info << " ";
    element->right->print();
}

void Search_Tree::create(int mas[]) {
    int size;
    for(int i = 0; i < size; i++)
        this->add_element(mas[i]);
}
