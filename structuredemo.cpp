#include <iostream>
using namespace std;

struct Student {
    int rollno;
    static char* className;

    // constructor
    Student(int rno) {  
        rollno = rno;
    }

    // member function to display roll no and class
    void display() {
        cout << "Roll No: " << rollno << endl;
        cout << "Class: " << className << endl;
    }
};

// initializing static variable outside the struct definition
char* Student::className = "12th Grade";

int main() {
    // create objects of Student
    Student s1(101);
    Student s2(102);

    // display details of each object
    s1.display();
    s2.display();

    return 0;
}