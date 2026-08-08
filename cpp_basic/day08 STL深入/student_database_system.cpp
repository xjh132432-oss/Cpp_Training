#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

class student
{
    public:

        int score;

        string name;

        int id;

        void print()
        {
            cout<<id<<" "<<name<<" "<<score<<endl;

        }
};

bool cmp(student a,student b)
{
    if(a.score!=b.score)
    {
        return a.score>b.score;
    }

    return a.name<b.name;
}


void addStud(unordered_map<int,student>& data)
{
    int Id;

    cout<<"请输入学号:"<<endl;

    cin>>Id;
    
    student s;  
    
    if(!data.count(Id))
    {
        s.id=Id;

        cout<<"请输入姓名、成绩:"<<endl;

        cin>>s.name>>s.score;

        data[Id]=s;
    }
    else
    {
        cout<<"该学号已存在"<<endl;
    }


}


void searchStud(unordered_map<int,student>& data)
{
    int Id;

    cout<<"请输入需要查询的学号:"<<endl;

    cin>>Id;

    if(data.count(Id))
    {
        data[Id].print();
    }

    else
    {
        cout<<"该学号不存在"<<endl;
    }
}

void updataScore(unordered_map<int,student>& data)
{
    int Id;

    cout<<"请输入需要修改的学号:"<<endl;

    cin>>Id;

    if(data.count(Id))
    {   

        int score;

        cout<<"请输入成绩"<<endl;

        cin>>score;

        data[Id].score=score;
    }

    else
    {
        cout<<"不存在"<<endl;
    }

}

void deleteStudent(unordered_map<int,student>& data)
{
    int Id;

    cout<<"请输入需要删除的学号:"<<endl;

    cin>>Id;

    if(data.count(Id))
    {
        data.erase(Id);
    }
    else
    {
        cout<<"不存在"<<endl;
    }
}

void showRank(unordered_map<int,student>& data)
{   
    vector<student> s;

    for(auto x:data)
    {
        s.push_back(x.second);
    }
    sort(
        s.begin(),
        s.end(),
        cmp
    );

    for(student x:s)
    {
        x.print();
    }
}

void scoreStatistics(unordered_map<int,student>& data)
{
    unordered_map<int,int> count;

    for(auto x:data)
    {
        count[x.second.score]++;
    }

    for(auto x:count)
    {
        cout<<x.first
            <<" : "
            <<x.second
            <<endl;
    }
}

int main()
{
    unordered_map<int,student> data;

     while(true)
    {

        cout<<
        "1添加\n"
        "2查询\n"
        "3修改\n"
        "4删除\n"
        "5排名\n"
        "6统计\n"
        "0退出\n";


        int choice;

        cin>>choice;



        if(choice==0)
        {
            break;
        }


        switch(choice)
        {

        case 1:

            addStud(data);

            break;


        case 2:

            searchStud(data);

            break;


        case 3:

            updataScore(data);

            break;


        case 4:

            deleteStudent(data);

            break;


        case 5:

            showRank(data);

            break;


        case 6:

            scoreStatistics(data);

            break;


        }

    }

    return 0;
}