#include <iostream>
using namespace std;

class Node
{
public:
    Node *next;
    int data;
    Node();
    Node(int info)
    {
        data = info;
        next = NULL;
    };
};

void display(Node *head)
{
    int i = 1;
    while (i<15)
    {
        cout << head->data << " -> ";
        head = head->next;
        i++;
    }
    cout << "NULL" << endl;
}
Node *insertAtHead(Node *head,int data){
 Node *newNode =new Node(data);
 if(head != NULL){
     newNode->next = head;
 }
 return newNode;

}

Node *insertAtTail(Node *head,int data){
    Node *newNode = new Node(data);
    newNode->next = head;
    Node *temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}




int main()
{
    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);
    Node *final = new Node(5);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = final;
    cout<<" We are capable of inserting in a circular LinkedList "
        <<endl<<" Provide data to insert at Front :  ";
    int data;
    cin>>data;
    Node *newHead = insertAtHead(node1,data);
    final->next = newHead;
    cout<< " We are even capable of inserting at the end ,"
        <<" Enter the value to INSERT :";
    cin>>data;
    Node *newTail = insertAtTail(newHead,data);
    display(newTail);
    //deallocating memory
    delete node1;
    delete node2;
    delete node3;
    delete node4;
    delete final;
    delete newHead;

    return 0;
}