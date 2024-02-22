#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node();
    Node(int info)
    {
        data = info;
        next = NULL;
        prev = NULL;
    }
};

void displayFromBeginning(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

void displayFromEnd(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->prev;
    }
    cout << "NULL" << endl;
}

Node *insertATFront(Node *newNode, Node *head)
{
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL)
    {
        head->prev = newNode;
    }
    return newNode;
}

void insertAtEnd(Node *&head, int data)
{
    Node *new_node = new Node(data);
    Node *end = head;
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    while (end->next != NULL)
    {
        end = end->next;
    }
    end->next = new_node;
    new_node->prev = end;
}

void insertAfter(struct Node *prevNode, int data)
{
    if (prevNode == NULL)
    {
        printf("Previous node cannot be NULL\n");
        return;
    }
    struct Node *newNode = new Node(data);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// Function to insert a Node before a given node
void insertBefore(struct Node **head, struct Node *nextNode, int data)
{
    if (nextNode == NULL)
    {
        printf("Next node cannot be NULL\n");
        return;
    }
    struct Node *newNode = new Node(data);
    if (*head == nextNode)
    {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp != NULL && temp->next != nextNode)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Next node not found in the list\n");
        return;
    }
    newNode->next = nextNode;
    temp->next = newNode;
}
void deleteNode(Node **head, Node *delNode)
{
    if (*head == NULL || delNode == NULL)
    {
        cout << "Head or node to delete cannot be NULL" << endl;
        return;
    }

    if (*head == delNode)
    {
        *head = delNode->next;
    }

    if (delNode->next != NULL)
    {
        delNode->next->prev = delNode->prev;
    }

    if (delNode->prev != NULL)
    {
        delNode->prev->next = delNode->next;
    }

    delete delNode;
}

int main()
{
    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);

    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;
    node3->next = node4;
    node4->prev = node3;

    displayFromBeginning(node1);
    displayFromEnd(node4);

    int data;
    cout << "Inserting at the front: " << endl
         << "Enter the data to insert: ";
    cin >> data;
    Node *newnode = new Node(data);
    Node *newhead = insertATFront(newnode, node1);
    displayFromBeginning(newhead);

    cout << "Inserting at the end: " << endl
         << "Enter the data to insert: ";
    cin >> data;
    insertAtEnd(newhead, data);
    insertAfter(node2, 787);
    insertBefore(&newhead, node4, 900);
    deleteNode(&newhead, node2);
    displayFromBeginning(newhead);

    delete node1;
    delete node2;
    delete node3;
    delete node4;

    return 0;
}
