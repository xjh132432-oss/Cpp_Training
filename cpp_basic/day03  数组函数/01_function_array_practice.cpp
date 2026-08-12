#include<iostream>
// Day 03: functions and arrays practice.
using namespace std;
void print_score(int n,int score[]);
void total_score(int n,int score[]);
void get_maxscore(int n,int score[]);
void fail_count(int n,int score[]);
int main()
{
    int n;
    
    cout<<"请输入学生数量";

    cin>>n;

    int score[n];

    for(int i=0;i<n;i++)
    {
        cout<<"请输入第"<<i+1<<"个学生成绩";
        cin>>score[i];
    }
    print_score(n,score);
    total_score(n,score);
    get_maxscore(n,score);
    fail_count(n,score);
    return 0;
}
void print_score(int n,int score[])
{   cout<<"成绩:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<score[i]<<" ";
    }
    cout<<endl;
}
void total_score(int n,int score[])
{   
    int sum=0;
    cout<<"总分:"<<endl;
    for(int i=0;i<n;i++)
    {
        sum+=score[i];
    }
    cout<<sum<<endl;
}
void get_maxscore(int n,int score[])
{   int x=0;
    for(int i=0;i<n;i++)
    {
        if(score[i]>x)
        {
            x=score[i];
        }
    }
    cout<<"最高:"<<endl<<x<<endl;
}
void fail_count(int n,int score[])
{   
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(score[i]<60)
        {
            count++;
        }
    }
    cout<<"不及格人数:"<<endl<<count<<endl;
}
