#include <iostream>

using namespace std;

struct element{
    int info;
    element* next;
};

class List{
private:
    element* head = NULL;
public:
    bool isEmpty(){
        /*if(head == NULL)
            return true;
        else
            return false;*/
        //return (head == NULL)? true:false;
        return (head == NULL);
    }
    bool add_element(int info, int index){
        if(index == 0){
            element* new_element = new element;
            new_element->info = info;
            new_element->next = head;
            head = new_element;
            return true;
        }
        if(head == NULL)
            return false; // можливо, якщо індекс більший за кількість елементів, його слід додати в кінець списку
        element* current = head;
        int current_index = 0;
        while ((current_index != index - 1) && (current != NULL)){
            current = current->next;
            current_index++;
        }
        if(current == NULL)
            return false;
        element* new_element = new element;
        new_element->info = info;
        new_element->next = current->next;
        current->next = new_element;
    }
    bool remove_element(int index){
        element* current = head;
        element* new_element = new element;
        int current_index = 0;
        if(index == 0){
            head = current->next;
            delete current;
        }
        while (current_index != index && current != NULL) {
            current = current->next;
            current_index++;
        }
        if(current = NULL)
            return false;

    }
    int get_element(int index){
        element* current = head;
        int current_index = 0;
        while (current_index != index && current != NULL){
            current = current->next;
            current_index++;
        }
        if(current == NULL){
            return false;
            }
        return current->info;
        }

    void print(){
        element* current = head;
        while(current){
            cout << current->info << " ";
            current = current->next;
        }
    }
};
class Stack{
private:
    element* head = NULL;
public:
    void push(int a){ // додає елемент у стек
        element* new_head = new element;
        new_head->info = a;
        new_head->next = head;
        head = new_head;

    }
    int pop(){ // видаляє елемент зі стеку і повертає значення видаленого елементу
        auto prev = head;
        head = head->next;
        int current = prev->info;
        delete prev;
        return current;
    }
    bool isEmpty(){ // перевірка чи існують елементи у стеку
        if(head == NULL)
            return true;
        else return false;
    }
    int top(){ // повертає значення першого елементу стеку
        //if (!isEmpty())
            return head->info;
        //else return -1;
    }

    void print(){
        element* current = head;
        while(current){
            cout << current->info << " ";
            current = current->next;
        }
    }
};

class Queue{
private:
    element* head = NULL;
public:
    void push(int a) { // додає елемент у чергу
        element *current = head;
        element *new_element = new element;
        new_element->info = a;
        new_element->next = nullptr;

        if (isEmpty()) {
            head = new_element;
        } else {
            current = head;

        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_element;
        }
    }
    int pop(){ // видаляє елемент з черги і повертає значення видаленого елементу
        auto prev = head;
        head = head->next;
        int current = prev->info;
        delete prev;
        return current;
    }
    bool isEmpty(){ // перевірка чи існують елементи у черзі
        if(head == NULL)
            return true;
        else return false;
    }
    int top(){ // повертає значення першого елементу черги
        //if (!isEmpty())
        return head->info;
        //else return -1;
    }
    void print(){
        element* current = head;
        while(current){
            cout << current->info << " ";
            current = current->next;
        }
    }
};

int main() {
    int a, b;
    Stack stack;
    Queue queue;
    List l;
    l.add_element(1,0);
    l.add_element(2,1);
    l.add_element(3,2);
    cout << "List: ";
    l.print();
    cout << " "<<endl;
    cout <<"get element: "<< l.get_element(0)<< endl;
    cout <<"list is empty: "<< l.isEmpty()<< endl;
    l.remove_element(1);
    cout << "List: " << endl;
    l.print();
    cout << " "<<endl;
    cout << "Stack: "<<endl;

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);

    stack.print();
    cout << " "<<endl;
    cout << "Stack2: "<<endl;
    stack.pop();
    stack.print();
    cout << " "<<endl;
    cout << "Is empty:" << stack.isEmpty()<<endl;

    cout << " "<<endl;
    cout << "Queue: " <<endl;
    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(4);
    queue.print();




    return 0;
}