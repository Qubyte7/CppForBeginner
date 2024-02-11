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
   if (temp->pointer != NULL)
   {
      temp =temp->pointer;
   }
   temp->pointer = newNode;
   newNode->pointer = NULL;
   return head;
}

Node *AddAtHead(Node *head, int value){
   Node *newNode = new Node(value);
   Node *temp = head;
   head = newNode;
   newNode->pointer = temp;
   return head;
}
int main()
{
   Node *node1 = new Node(2);
   Node *node2 = new Node(3);
   Node *node3 = new Node(4);
   Node *node4 = new Node(5);
   node1->pointer = node2;
   node2->pointer = node3;
   node3->pointer = node4;
   Node *head = node1;
   cout << "we are displaying sth  : " << endl;
   display(head);
   cout << " I THINK !";
   cout<< "Now we are going to something at tail, ENTER A VALUE :";
   int value;
   cin>>value;
   AddAtTail(head,value);
   cout<<"Now check that it had been added ?? : ";
   display(head);
   cout<<"hOORAY !!!" << endl;
   // cout<<"What if we added somthing in the front of the List ???"<<endl;
   // cout<<"Enter the value to be added :";
   // cin>>value;
   // cout<<"Did also work :";
   // AddAtHead(head,value);
   // display(head);
   // cout<<"oOOh My we are genius ! ";
   
}
