//
// Created by AVzoz on 11.06.2023.
//

#include "List.h"

void List::add_to_begin(int info) {
    auto new_element = new element;
    new_element->info = info;
    new_element->next = head;
    head = new_element;
}

void List::add_to_end(int info) {
    if(!head){
        head = new element;
        head->info = info;
        head->next = NULL;
    }
    else{
        element* current;
        for(current = head; current->next != NULL; current = current->next);
        current->next = new element;
        current->next->info = info;
        current->next->next = NULL;
    }

}

void List::add_before(int target, int info) {
    if(head){
        if(head->info == target){
            auto new_element = new element;
            new_element->info = info;
            new_element->next = head;
            head = new_element;
        }
        else{
            element* current;
            for(current = head; current->next != NULL; current = current->next){
                if(current->next->info == target){
                    element * new_element = new element;
                    new_element->info = info;
                    new_element->next = current->next;
                    current->next = new_element;
                    return;
                }
            }
        }
    }
}

void List::add_after(int target, int info) {
    if(head){
        element* current;
        for(current = head; current != NULL; current = current->next){
            if(current->info == target){
                auto new_element = new element;
                new_element->info = info;
                new_element->next = current->next;
                current->next = new_element;
            }
        }
    }
}

void List::delete_by_info(int info) {
    if(head){
        if(head->info == info){
            auto to_delete = head;
            head = head->next;
            delete to_delete;
        }
        else{
            for(auto current = head; current->next != NULL; current = current->next){
                if(current->next->info == info){
                    element* to_delete = current->next;
                    current->next = current->next->next;
                    delete to_delete;
                    return;
                }
            }
        }
    }
}

void List::delete_by_index(int index) {
    if(head){
        if(index == 0){
            auto to_delete = head;
            head = head->next;
            delete to_delete;
        }
        else{
            for(auto current = head; current->next != NULL; current = current->next, index--){
                if(index == 1){
                    element* to_delete = current->next;
                    current->next = current->next->next;
                    delete to_delete;
                    return;
                }
            }
        }
    }
}

int List::size() {
    int s = 0;
    for(auto current = head; current != NULL; current = current->next)
        s++;
    return s;
}

void List::print() {
    element* current = head;
    while(current){
        std::cout << current->info << " ";
        current = current->next;
    }
}

int List::find_element(int info) {
    int index = 0;
    for(auto current = head; current; current = current->next, index++){
        if(current->info == info){
            return index;
        }
    }
    return -1;
}
