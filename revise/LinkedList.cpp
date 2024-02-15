#include <stdio.h>
#include <iostream>
using namespace std;
class Node
{
public:
   int data;
   Node *pointer;

   Node() {}
   Node(int d)
   {
      data = d;
      pointer = NULL;
   }
};
void display(Node *head)
{
   while (head != NULL)
   {
      cout << head->data << " -> ";
      head = head->pointer;
   }
   cout << " NULL " << endl;
}
Node *AddAtTail(Node *head, int value)
{
   Node *newNode = new Node(value);
   Node *temp = head;
   while(head->pointer != NULL)
   {
      head =head->pointer;
   }
   head->pointer = newNode;
   newNode->pointer = NULL;
   return temp;
}

Node *AddAtHead(Node *head, int value){
   Node *newNode = new Node(value);
   newNode->pointer = head;
   head = newNode;
   return head;
    display(head);
}
int main()
{
   Node *node1 = new Node(2);
   Node *node2 = new Node(3);
   Node *node3 = new Node(4);
   Node *node4 = new Node(5);
   Node *node5 = new Node(6);
   node1->pointer = node2;
   node2->pointer = node3;
   node3->pointer = node4;
   node4->pointer = node5;
   Node *head = node1;
   cout << "the List is as follows  : " << endl;
   display(head);
   cout << " I THINK !";
   cout<< "Now we are going to something at tail, ENTER A VALUE :";
   int value;
   cin>>value;
   AddAtTail(head,value);
   cout<<"and the output when adding a value at tail is bellow : ";
   display(head);
   cout<<"why is 4,5 and 6 not being displayed ?";
   cout<<"hOORAY !!!" << endl;
   cout<<"What if we added somthing in the front of the List ???"<<endl;
   cout<<"Enter the value to be added :";
   int vs;
   cin>>vs;
   cout<<"Did also work :";
   
   display(AddAtHead(head,vs));
   cout<<"oOOh My we are genius ! ";
   
}
