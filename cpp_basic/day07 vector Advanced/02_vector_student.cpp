#include<iostream>
#include<vector>
using namespace std;

class student 
{
    public:
        string name;
        
        int score;
    
    
        void print()
        {
            cout<<name<<" "<<score<<endl;
        }

};


int main()
{   

    int n;

    cin>>n;
    
    vector<student> students;

    string name;

    int score;

    for(int i=0;i<n;i++)
    {
        student s;

        cin>>s.name>>s.score;

        students.push_back(s);
        
    }

    for(student s:students)
    {
        s.print();
    }

    return 0;

}