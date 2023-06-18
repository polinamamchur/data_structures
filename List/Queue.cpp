//
// Created by AVzoz on 11.06.2023.
//

#include "Queue.h"

void Queue::add_element(int a, Queue::element *&head) {
    if (head == NULL){
        head = new element;
        head->info = a;
        head->next = NULL;
    }
    else{
        add_element(a, head->next);
    }
}

void Queue::push(int a) {
    add_element(a, head);
}

int Queue::pop() {
    int i = head->info;
    auto cash = head;
    head = head->next;
    delete cash;
    return i;
}

bool Queue::isEmpty() {
    return (head == NULL);
}

int Queue::top() {
    if(head != NULL)
        return head->info;
}
