#include<iostream>
#include<fstream>
#include<vector>
using namespace std;


class Student
{   
    public:

        int ID;

        string name;

        int score;
};


int main()
{
    int n;

    cin>>n;

    Student s;
    
    ofstream out("student.txt");

    if(!out.is_open())
    {
        cout<<"无学生信息!";

        return 0;

    }

    for(int i=0;i<n;i++)
    {
        cin>>s.ID>>s.name>>s.score;

        out<<s.ID<<" "<<s.name<<" "<<s.score<<endl;

    }

    out.close();

    ifstream in("student.txt");

    Student temp;

    vector<Student> students;

    while (in>>temp.ID>>temp.name>>temp.score)
    {
        students.push_back(temp);
    }

    in.close();

    for(Student x:students)
    {
        cout<<x.ID<<" "<<x.name<<" "<<x.score<<endl;

    }
    

    return 0;

}