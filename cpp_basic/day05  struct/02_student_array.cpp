#include<iostream>
using namespace std;

struct Student
{
    string name;
    int age;
    double score;

};


void printInfor(const Student student[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<student[i].name<<endl;
        cout<<student[i].age<<endl;
        cout<<student[i].score<<endl;
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

    return 0;
}
