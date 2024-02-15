#include <stdio.h>
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int info)
    {
        data = info;
        next = NULL;
        prev = NULL;
    }
};

int main()
{
    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);

    node1->prev = NULL;
    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;
    node3->next = node4;
    node4->prev = node3;
    node4->next = NULL;
    
//with next
    while (node1 != NULL)
    {
        cout << node1->data << " -> ";
        node1 = node1->next;
    }
    cout <<"NULL";
    return 0;
}