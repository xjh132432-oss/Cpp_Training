#include<iostream>
#include<vector>
using namespace std;

class student
{
    private:

        string name;

        int score;

    public:
        string getName() const
        {
            return name;
        }


        int getScore() const
        {
            return score;
        }


        void print() const
        {
            cout<<getName()<<" "<<getScore();

            cout<<endl;
        }


        student(string name,int score)
        {
            this->name=name;
            this->score=score;
        }
};


void showAll(const vector<student>& students)
{   
    if(students.empty())
    {
        cout<<"暂未添加学生"<<endl;

        return;
    }

    for(const student& x:students)
    {
        x.print();
    }
}


void getMax(const vector<student>& students)
{   
    if(students.empty())
    {
        cout<<"暂无数据"<<endl;

        return;
    }

    int maxId=0;

    for(int i=0;i<students.size();i++)
    {
        if(students[i].getScore()>students[maxId].getScore())
        {
            maxId=i;
        }
    }

    cout<<"最高成绩:"<<endl;

    students[maxId].print();
}


void deletStud(vector<student>& students)
{   

    string name;

    cout<<"请输入学生姓名";

    cin>>name;

    for(int i=0;i<students.size();i++)
    {
        if(students[i].getName()==name)
        {
            students.erase(
            students.begin()+i
            );

            cout<<"删除成功"<<endl;

            return;
        }

        cout<<"未找到学生";
    }
}


void addStudent(vector<student>& students)
{
    
        string name;

        int score;

        cout<<"请输入姓名成绩:"<<endl;
        
        cin>>name>>score;

        student s(name,score);

        students.push_back(s);

        cout<<"删除成功"<<endl;

}

int main()
{
    vector<student> s;

    while (true)
    {   
        cout<<endl;

        cout<<"1.添加学生"<<endl;

        cout<<"2.显示所有学生"<<endl;

        cout<<"3.删除学生"<<endl;

        cout<<"4.查询最高成绩"<<endl;

        cout<<"0.退出"<<endl;

        int choice;

        cin>>choice;

        if(choice==0)
        {
            break;
        }
        switch (choice)
        {
        case 1:
           addStudent(s);

           break;
        
        case 2:
            showAll(s);

            break;

        case 3:
            deletStud(s);

            break;

        case 4:
            getMax(s);

            break;
        
        default:
            cout<<"输入错误"<<endl;

        }
    }
    
    

    return 0;
}
