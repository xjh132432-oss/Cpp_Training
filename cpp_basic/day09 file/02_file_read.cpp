#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

class Student
{   
    public:
        int Id;

        int score;

        string name;
};
int main()
{
    vector<Student> students;

    Student s;

    ifstream in("student.txt");

    if(!in.is_open())
    {
        cout<<"文件打开失败！";

        return 0;
    }

    while (in>>s.Id>>s.name>>s.score)
    {
       students.push_back(s);
    }

    in.close();
    
    int sum=0,count=0;

    for(Student x:students)
    {
        sum+=x.score;
        
        count++;
        
        cout<<x.Id<<" "<<x.name<<" "<<x.score<<endl;

    }
    double ave=double(sum)/count;

    cout<<"平均成绩:"<<endl
        <<ave<<endl
        <<"学生数量:"<<endl
        <<count;
    
}