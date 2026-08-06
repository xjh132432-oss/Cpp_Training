#include<iostream>
#include<unordered_map>
using namespace std;


class Student
{
    public:

        string name;

        int score;

        void print()
        {
            cout<<name<<" "<<score;
        }
    
};


int main()
{
    int n;

    cin>>n;

    Student s;

    unordered_map<int,Student> students;

    for(int i=0;i<n;i++)
    {
        int studId;

        string name;

        int score;

        cout<<"请输入学号:";

        cin>>studId;
        
        cout<<"请输入姓名:";

        cin>>name;

        students[studId].name=name;
        
        cout<<"请输入成绩:";

        cin>>score;

        students[studId].score=score;

    }

    int num;

    cout<<"请输入需要查询的学号:";

    cin>>num;

    students[num].print();

    return 0;


}
