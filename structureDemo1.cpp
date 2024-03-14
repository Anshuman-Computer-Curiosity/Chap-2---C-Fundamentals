#include<iostream>
using namespace std;

struct Student {
    int rollno;
    static char *className;
    Student(int rno){rollno=rno;} //constructor
    void display(){ //function
        cout<<"Student rollno = "<<rollno<<endl;
        cout<<"Student class name = "<<className<<endl;
    }
};
char* Student::className = "BCA";
int main(){
    Student s1(7780);
    s1.display();
    cout<<sizeof(s1)<<endl;
    Student s2(7781);
    s2.display();
    return 0;
}