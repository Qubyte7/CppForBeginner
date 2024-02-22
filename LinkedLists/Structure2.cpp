#include <iostream>
#include <string>

using namespace std;

class Student
{
    public:
    int age;
    string name;
    string school;
    Student(){};
    Student(int a, string n, string s)
    {
        age = a;
        name = n;
        school = s;
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

int main()
{
    Node n1(10);
    Node *n2 = new Node(20);
    cout << n1.data << endl;
    cout << n2->data << endl;

    Student s1(18, "Mary", "RCA");
    s1.printDetails();
    Student s2 = Student(10, "MIKE", "rca");
    s2.printDetails();
    Student *s3 = new Student(20, "DIVIN", "RCA");
    s3->printDetails();
    Student s4 = {30, "john", "RCA"};
    s4.printDetails();

    delete n2;         // Don't forget to delete dynamically allocated memory
    delete s3;         // Don't forget to delete dynamically allocated memory

    return 0;
}
