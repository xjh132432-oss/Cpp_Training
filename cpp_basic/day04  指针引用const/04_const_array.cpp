#include<iostream>
using namespace std;

int get_sum(const int score[]);

int main()
{
    int score[5]={80,90,70,60,100};

    int sum=get_sum(score);

    cout<<sum;
    
    return 0;

}

int get_sum(const int score[])
{
    int sum=0;

    for(int i=0;i<5;i++)
    {
        sum+=score[i];
    }

    return sum;

}