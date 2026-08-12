#include<iostream>
#include<vector>
#include<algorithm>
// Day 11: advanced vector practice.
using namespace std;


struct Student
{
    int id;

    string name;

    int score;
};


bool cmp(const Student& a,const Student& b)
{
    if(a.score!=b.score)
    {
        return a.score>b.score;
    }


    if(a.name!=b.name)
    {
        return a.name<b.name;
    }


    return a.id<b.id;
}


int main()
{
    int n;

    cin>>n;


    vector<Student> students;


    for(int i=0;i<n;i++)
    {
        Student s;

        cin>>s.id
           >>s.name
           >>s.score;

        students.push_back(s);
    }


    sort(
        students.begin(),
        students.end(),
        cmp
    );


    for(Student& s:students)
    {
        cout<<endl
            <<s.id<<" "
            <<s.name<<" "
            <<s.score
            <<endl;
    }
    students.erase(
        unique(students.begin(),students.end()),
        students.end()
    );

    int count=0;

    for(Student& s:students)
    {
        if(s.score==students[0].score)
        {
            count++;
        }

        else
        {
            break;
        }

    }

    cout<<"最高分人数:"<<endl<<count;

    return 0;
}
