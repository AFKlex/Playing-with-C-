#include<iostream>
class Node {
    
    public: int data;
    Node *next;  

}; 

void print_linked_list(Node *n){
    while (n != nullptr){
        std::cout << n->data << std::endl;
        n = n->next; 
    }
}


int main(int argc, char const *argv[])
{
    Node *head = nullptr; 
    Node *second = nullptr; 
    Node *third = nullptr; 

    head = new Node(); 
    second = new Node(); 
    third = new Node(); 

    head ->data = 1; 
    head ->next = second; 

    second ->data = 2; 
    second ->next =third; 

    third ->data=3; 
    third->next = nullptr; 

    print_linked_list(head); 

    return 0;
}
