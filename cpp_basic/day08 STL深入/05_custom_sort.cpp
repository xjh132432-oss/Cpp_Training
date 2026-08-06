#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class student
{   
    public:
        
        int score;

        string name;

        void print()
        {
            cout<<name<<" "<<score<<endl;
        }

};


bool cmp(student students1,student students2)
{
    if(students1.score!=students2.score)
    {
        return students1.score>students2.score;
    }

    return students1.name<students2.name;
}

int main()
{   
    student students;

    vector<student> s;

    int n;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        string name;

        int score;

        student cl;

        cin>>name>>score;

        cl.name=name;

        cl.score=score;

        s.push_back(cl);

    }


    sort(
        s.begin(),
        s.end(),
        cmp
    );

    for(auto x:s)
    {
        x.print();
    }

    
    return 0;
}