#include<iostream>
using namespace std;

class Student
{
    private:
        string name;
        int age;
        double score;
    
    public:
        void setData(string name,int age,double score)
        {
            if(score>=0&&score<=100)
            {
                this->score=score;
            }

            this->age=age;
            this->name=name;

        }


        double getScore() const
        {
            return score;
        }

        
        void print()
        {
            cout<<name<<endl
                <<age<<endl
                <<score<<endl;
        }
    
};

double getAverage(const Student s[],int n)
{
    double sum=0,ave;
    for(int i=0;i<n;i++)
    {
        sum+=s[i].getScore();
    }
    return sum/n;

}

int getMaxid(const Student s[],int n)
{   
    int MaxId=0;

    for(int i=0;i<n;i++)
    {
        if(s[i].getScore()>s[MaxId].getScore())
        {
            MaxId=i;
        }
    }   

    return MaxId;
}


int main()
{
    int n;
    string name;
    int age;
    double score;

    cin>>n;

    Student s[n];

    for(int i=0;i<n;i++)
    {
        cin>>name>>age>>score;

        s[i].setData(name,age,score);

    }


    int Maxid=getMaxid(s,n);

    cout<<"最高:"<<endl;

    s[Maxid].print();


    double aver=getAverage(s,n);

    cout<<"平均:"<<endl<<aver;

    return 0;

}