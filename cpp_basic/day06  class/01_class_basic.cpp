#include<iostream>
using namespace std;

class Student
{
public:

    string name;

    int age;

    int score;


    void print()
    {
        cout<<"姓名:"<<name<<endl;
        cout<<"年龄:"<<age<<endl;
        cout<<"成绩:"<<score<<endl;
    }
};


int main()
{
    Student s;

    cin>>s.name>>s.age>>s.score;

    s.print();

    return 0;
}