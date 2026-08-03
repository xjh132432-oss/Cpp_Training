#include<iostream>
using namespace std;

class Student
{
    private:
    
        double score;

    public:

    double getscore(double score)
    {
        return score;
    }

    void setScore(double s)
    {
        if(score>=0&&score<=100)
        {
            score=s;
        }
    }
};

int main()
{
    double s;

    cin>>s;

    Student score;

    score.setScore(s);

    cout<<"socre="<<score.getscore(s);

    return 0;


}