#include<iostream>
#include<fstream>

using namespace std;


int main()
{
    ofstream out("student.txt");


    if(!out.is_open())
    {
        cout<<"文件打开失败"<<endl;

        return 0;
    }


    int n;

    cout<<"请输入学生数量:";

    cin>>n;


    for(int i=0;i<n;i++)
    {
        int id;

        string name;

        int score;


        cin>>id>>name>>score;


        out
        <<id<<" "
        <<name<<" "
        <<score
        <<endl;
    }


    out.close();


    cout<<"保存完成"<<endl;


    return 0;
}