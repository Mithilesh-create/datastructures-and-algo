#include <iostream>
class SinglyNode
{
public:
    int value;
    SinglyNode *next;
};
class DoublyNode{
    public:
        int value;
        DoublyNode* next;
        DoublyNode* prev;
};
class CircularNode{
    public:
        int value;
        CircularNode* next;
};

int main()
{

    SinglyNode *node1 = new SinglyNode();
    SinglyNode *node2 = new SinglyNode();
    SinglyNode *node3 = new SinglyNode();
    node1->value = 10;
    node2->value = 20;
    node3->value = 30;
    node1->next = node2;
    node2->next = node3;
}