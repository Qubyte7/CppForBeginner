#include <iostream>
#include <string>

using namespace std;

struct Student
{
    int age;
    string name;
    string school;
    Student *next;
    Student(){};
    Student(int a, string n, string s)
    {
        age = a;
        name = n;
        school = s;
        next = NULL;
    };
    void printDetails()
    {
        cout << "age :" << age << " name :" << name << " school :" << school << endl;
    };
};

struct Node
{
    int data;
    Node(){};
    Node(int a)
    {
        data = a;
    }
};
void printList(Student *head)
{
    while (head != NULL)
    {
        cout << "age :" << head->age << "name :" << head->name << "school :" << head->school << " -> "<<endl;
        head = head->next;
    };
    cout << " NULL " << endl;
}

int main()
{
    Node n1(10);
    Node *n2 = new Node(20);
    cout << n1.data << endl;
    cout << n2->data << endl;

    Student s1(18, "Mary", "RCA");
    Student s2 = Student(10, "MIKE", "rca");
    Student *s3 = new Student(20, "DIVIN", "RCA");
    Student *s4 = new Student(30, "john", "RCA");
    Student s5(17, "kamanzi", "Nyabihu tvet");
    s1.next = &s2;
    s2.next = s3;
    s3->next = s4;
    s4->next = &s5;
    Student *head = &s1;
    printList(head);

    delete n2; // Don't forget to delete dynamically allocated memory
    delete s3; // Don't forget to delete dynamically allocated memory

    return 0;
}
