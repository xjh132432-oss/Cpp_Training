#include<iostream>
using namespace std;

class Student
{
    private:
    string name;
    int age;

    public:
    Student(string name,int age)
    {
        this->age=age;
        this->name=name;
    }

    void print()
    {
        cout<<name<<endl;
        cout<<age<<endl;
    }
    
};
int main()
{   
    string name;
    int age;

    cin>>name>>age;

    Student s(name,age);

    s.print();

    return 0;

}