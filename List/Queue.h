//
// Created by AVzoz on 11.06.2023.
//

#ifndef TEST_QUEUE_H
#define TEST_QUEUE_H

#include <iostream>

class Queue{
private:
    struct element{
        int info;
        element* next;
    }* head = NULL;

    void add_element(int a, element* &head);
public:
    void push(int a);
    int pop();
    bool isEmpty();
    int top();
};


#endif //TEST_QUEUE_H
