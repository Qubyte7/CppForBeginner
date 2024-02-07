// #include <iostream>
// #include <string>

// using namespace std;

// // struct Student
// // {
// //     int age;
// //     string name;
// //     string school;
// //     Student *next;
// //     Student(){};
// //     Student(int a, string n, string s)
// //     {
// //         age = a;
// //         name = n;
// //         school = s;
// //         next = NULL;
// //     };
// //     void printDetails()
// //     {
// //         cout << "age :" << age << " name :" << name << " school :" << school << endl;
// //     };
// // };

// // void printList(Student *head)
// // {
// //     while (head != NULL)
// //     {
// //         cout << "age :" << head->age << "name :" << head->name << "school :" << head->school << " -> "<<endl;
// //         head = head->next;
// //     };
// //     cout << " NULL " << endl;
// // }
// struct Node
// {
//     int data;
//     Node(){};
//     Node *next;
//     Node(int a)
//     {
//         data = a;
//         next = NULL;
//     }
// };

// void printList2(Node *head)
// {
//     while (head != NULL)
//     {
//         cout << "age :" << head->data<<"->"<<endl;
//         head = head->next;
//     };
//     cout << " NULL " << endl;
// }

// Node* addAtHead(Node *head,int  value){
// Node *newNode = new Node(value);
// newNode->next= head;
// head = newNode;
// return head;
// };

// Node* addAtTail(Node *head,int value){
//     Node *temp = head;
//     Node *newNode = new Node(value);
//     while(temp->next != NULL ){
//         temp = temp->next;
//     }
//     temp->next = newNode;

//     return head;
// }

// int main()
// {
//     Node n1(10);
//     Node *n2 = new Node(20);
//     Node *n3 = new Node(30);
//     // Node *n4 ;
//     // cout << n1.data << endl;
//     // cout << n2->data << endl;
//     // Student s1(18, "Mary", "RCA");
//     // Student s2 = Student(10, "MIKE", "rca");
//     // Student *s3 = new Student(20, "DIVIN", "RCA");
//     // Student *s4 = new Student(30, "john", "RCA");
//     // Student s5(17, "kamanzi", "Nyabihu tvet");
//     // s1.next = &s2;
//     // s2.next = s3;
//     // s3->next = s4;
//     // s4->next = &s5;
//     // Student *head = &s1;
//      Node *head = &n1;
//     // addAtHead(head, 80); 
//     addAtTail(head, 100);
//      n1.next=n2;
//      n2->next=n3;
//     // n3->next=n4;
//     printList2(head);
  
//     delete n3;
//     delete n2; // Don't forget to delete dynamically allocated memory
//    // delete s3; // Don't forget to delete dynamically allocated memory

//     return 0;
// }




#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node() {}
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

Node *addAtHeadd(Node *head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    return head;
}

Node *addAtTail(Node *head, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = NULL;
    return head;
}
Node *insertAtPos(Node *head,int i,int data){
    if(i<0){
        return head;
    }
    if(i==0){
        Node *n = new Node(data);
        n->next = head;
        head= n;
        return head;
    }
    Node *temp = head;
    int count = 1;
    while(count<=i-1 && head!=NULL){
        head = head->next;
        count++;
    }
    if(head){
        Node *n = new Node(data);
        n->next = head->next;
        head->next = n;

        return temp;
    }
    return temp;
};


// Node *UserData()
// {
//     int data;
//     cout << "Add a number to Linked List or -1 to exit" << endl;
//     cin >> data;
//     Node *head = NULL;
//     Node *tail = NULL;
//     while (data != -1)
//     {
//         Node *n = new Node(data);

//         if (head == NULL)
//         {
//             head = n;
//         }
//         else
//         {
//             n->next = head;
//             head = n;
//         }
//         cin >> data;
//     }
//     return head;
// }
Node *deleteFirstNode(Node* head){
    if(head == NULL)
        return NULL;
    Node* temp = head;
    head = temp->next;
    delete temp;
    return head;

}
Node* deleteLast(Node* head){
    if(head == NULL)
        return NULL;
    if (head->next == NULL){
        delete head;
        return NULL;
    }
    Node* second_last = head;
    while(second_last->next->next != NULL){
        second_last = second_last;
    }
    delete(second_last->next);
    second_last->next = NULL;
    return head;
}

void display(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
    Node* root = NULL;
    Node* second = NULL;
    Node* third = NULL;
    root = new Node(1);
    second = new Node(2);
    third = new Node(3);
    root->next=second;
    second->next=third;
    Node *head=root;
    int n;
    cout<<"Enter the postiion at which you want to insert : ";
    cin>>n;
    cout<<"Enter the value :";
    int number;
    cin>>number; 
    cout<<"value "<<number<<" is placed at position"<<n <<endl;
    head=insertAtPos(head,n,number);
    display(head);
    cout<<" delete FIRST :";
    head=deleteFirstNode(head);
    display(head);
    cout<<" CONTINUE";
    cout<<"deleted from Last : "<<endl;
    head = deleteLast(head);
    display(head);
    return 0;

}








