
#include <iostream>

using namespace std;

class B_Tree {
    struct Element{
        int info;
        B_Tree* left;
        B_Tree* right;
    } *element;
public:
    B_Tree(){
        element = NULL;
    }
    void stright_create();
    void symetric_create();
    void stright_print();
    void symetric_print();
    void reverse_print();

};



