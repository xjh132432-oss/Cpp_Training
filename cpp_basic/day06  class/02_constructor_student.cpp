#include<iostream>
using namespace std;

class Student
{
    public:

    string name;
    int age;
    double score;

    Student(string n,int a,double s)
    {
        name=n;
        age=a;
        score=s;
    }

    void print()
    {
        cout<<"姓名:"<<endl<<name<<endl;
        cout<<"年龄:"<<endl<<age<<endl;
        cout<<"成绩:"<<endl<<score<<endl;
    }

};

int main()
{
    string name;
    int age;
    double score;

    cin>>name>>age>>score;

    Student a(name,age,score);

    a.print();

    return 0;


}