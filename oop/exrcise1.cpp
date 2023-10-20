#include <iostream>
#include <stdio.h>
using namespace std;

class Student
{
public:
    Student(string name)
    {
        cout << name;
    }
};

int main()
{
    string studentName;
    cout << "enter the name of the student :";
    getline(cin, studentName);
    if (studentName == "")
    {
        cout << "unknown";
    }
    Student n1(studentName);

    return 0;
}

