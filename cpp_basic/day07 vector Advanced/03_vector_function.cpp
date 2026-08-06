#include<iostream>
#include<vector>
using namespace std;


class student
{
    public:

        string name;

        int score;


};


double getaAve(const vector<student>& students,int n)
{   
    int sum=0;

    for(const student& x:students)
    {
        sum+=x.score;
    }

    return sum/n;
}


int main()
{   
    string name;

    int score;

    vector<student> students;

    int n;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        student s;

        cin>>s.name>>s.score;

        students.push_back(s);

    }

    double ave=getaAve(students,n);

    cout<<"Average:"<<endl<<ave;

    return 0;
}