#include<iostream>
using namespace std;

struct Student
{
    int age;

    string name;

    double score;

};

int main()
{
    Student s1;

    s1.name="Tom";
    s1.age=18;
    s1.score=95.5;

    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.score<<endl;


    return 0;
}