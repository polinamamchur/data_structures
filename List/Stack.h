//
// Created by AVzoz on 11.06.2023.
//

#ifndef TEST_STACK_H
#define TEST_STACK_H

#include <iostream>

class Stack{
private:
    struct element{
        int info;
        element* next;
    }* head = NULL;
public:
    void push(int a);
    int pop();
    bool isEmpty();
    int top();
};


#endif //TEST_STACK_H
