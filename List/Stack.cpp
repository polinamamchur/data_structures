//
// Created by AVzoz on 11.06.2023.
//

#include "Stack.h"

void Stack::push(int a) {
    auto new_element = new element;
    new_element->info = a;
    new_element->next = head;
    head = new_element;
}

int Stack::pop() {
    int i = head->info;
    auto cash = head;
    head = head->next;
    delete cash;
    return i;
}

bool Stack::isEmpty() {
    return (head == NULL);
}

int Stack::top(){
    if(head)
        return head->info;
}
