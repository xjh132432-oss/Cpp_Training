#include<iostream>
using namespace std;

class Student
{
    private:

        string name;
        double score;

    public:

        double getScore() const
        {
            return score;
        }

        string getName()
        {
            return name;
        }

        void setDigit(string name,double score)
        {
            this->score=score;
            this->name=name;
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
int main()
{   
    string name;
    double score;
    int n;
    
    cin>>n;

    Student s[n];

    for(int i=0;i<n;i++)
    {
        cin>>name>>score;
        s[i].setDigit(name,score);
    }

    double ave=getAverage(s,n);
    cout<<ave;

    return 0;
}