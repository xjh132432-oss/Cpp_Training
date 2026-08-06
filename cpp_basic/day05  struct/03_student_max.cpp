#include<iostream>
using namespace std;

struct Student
{
    string name;
    int age;
    double score;

};

int getMax(const Student student[],int n)
{
    int MaxId=0;

    for(int i=0;i<n;i++)
    {
        if(student[i].score>student[MaxId].score)
        {
            MaxId=i;
        }
    }

    return MaxId;
}


void printInfor(const Student student[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<student[i].name<<endl;
        cout<<student[i].age<<endl;
        cout<<student[i].score<<endl;
        cout<<endl;
    }
}


double getSum(const Student student[],int n)
{
    double sum;

    for(int i=0;i<n;i++)
    {
        sum+=student[i].score;
    }

    return sum/n;

}


int main()
{   
    int n;
    
    cout<<"请输入人数";
    cin>>n;

    Student student[n];

    for(int i=0;i<n;i++)
    {
        cout<<"请输入姓名:";
        cin>>student[i].name;
        cout<<"请输入年龄:";
        cin>>student[i].age;
        cout<<"请输入成绩:";
        cin>>student[i].score;
    }

    printInfor(student,n);

    double a=getSum(student,n);
    cout<<"平均成绩:"<<" "<<a;

    int id=getMax(student,n);

    cout<<student[id].name;
    cout<<student[id].age;
    cout<<student[id].score;
    return 0;
}
