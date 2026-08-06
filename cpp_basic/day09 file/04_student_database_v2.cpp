#include<iostream>
#include<unordered_map>
#include<fstream>
#include<algorithm>
#include<vector>
using namespace std;

class Student
{
    public:

        int score;

        string name;

        int ID;
    
        void print() const
        {
            cout<<ID<<" "<<name<<" "<<score<<endl;
        }
};


bool cmp(const Student& a,const Student& b)
{

        return a.score>b.score;
   
}


void saveData(unordered_map<int,Student>& data)
{
    ofstream out("student.txt");

    for(auto x:data)
    {
        out<<x.second.ID<<" "<<x.second.name<<
        " "<<x.second.score<<endl;
    }

    out.close();
}


void addStudent(unordered_map<int,Student>& data)
{

    Student s;

    cout<<"请输入学生的学号、姓名、成绩:";

    cin>>s.ID>>s.name>>s.score;

    if(data.count(s.ID))
    {
        cout<<"学生已存在"<<endl;

        return;
    }

    data[s.ID]=s;

    saveData(data);

}


void loadData(unordered_map<int,Student>& data)
{
    ifstream in("student.txt");

    if(!in.is_open())
    {
        return;
    }

    Student s;

    while(in>>s.ID>>s.name>>s.score)
    {
        data[s.ID]=s;
    }

    in.close();
}


void searchStudent(unordered_map<int,Student>& data)
{
    cout<<"请输入需要查询的学号:";

    int ID;

    cin>>ID;

    if(data.count(ID))
    {
        data[ID].print();

        cout<<"查询成功!";

    }

    else
    {
        cout<<"该学号不存在!"<<endl;
    }

}


void updataScore(unordered_map<int,Student>& data)
{
    int Id;

    cout<<"请输入需要修改的学号:"<<endl;

    cin>>Id;

    if(data.count(Id))
    {
        cout<<"请输入姓名、成绩:";

        cin>>data[Id].name>>data[Id].score;

        saveData(data);
    }

    else
    {
        cout<<"该学号不存在!"<<endl;
    }
}


void deleteStudent(unordered_map<int,Student>& data)
{
    int Id;

    cout<<"请输入需要删除的学号:"<<endl;

    cin>>Id;

    if(data.count(Id))
    {
        data.erase(Id);

        saveData(data);
    }

    else
    {
        cout<<"该学号不存在!"<<endl;
    }
}


void showRank(unordered_map<int,Student>& data)
{
    vector<Student> students;


    for(auto x:data)
    {
        students.push_back(x.second);
    }


    sort(
        students.begin(),
        students.end(),
        cmp
    );


    for(const Student& s:students)
    {
        s.print();
    }
}


int main()
{   
    unordered_map<int,Student> data;

    loadData(data);

     while(true)
    {
        cout
        <<"1 添加\n"
        <<"2 查询\n"
        <<"3 删除\n"
        <<"4 排名\n"
        <<"0 退出\n";


        int choice;

        cin>>choice;


        if(choice==0)
        {
            saveData(data);

            break;
        }


        switch(choice)
        {

        case 1:
            addStudent(data);
            break;


        case 2:
            searchStudent(data);
            break;


        case 3:
            deleteStudent(data);
            break;


        case 4:
            showRank(data);
            break;

        }

    }


    return 0;
}