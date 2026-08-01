#include <iostream>
using namespace std;


int getSum(const int score[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += score[i];
    }

    return sum;
}


int getMax(const int score[], int n)
{
    int maxScore = score[0];

    for(int i = 1; i < n; i++)
    {
        if(score[i] > maxScore)
        {
            maxScore = score[i];
        }
    }

    return maxScore;
}


int countFail(const int score[], int n)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(score[i] < 60)
        {
            count++;
        }
    }

    return count;
}


int main()
{
    int n;

    cin >> n;


    int score[100];


    for(int i = 0; i < n; i++)
    {
        cin >> score[i];
    }


    cout << "成绩:" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << score[i] << " ";
    }

    cout << endl;


    int sum = getSum(score,n);

    int maxScore = getMax(score,n);

    int fail = countFail(score,n);


    cout << "总分:" << sum << endl;

    cout << "平均:" << sum/n << endl;

    cout << "最高:" << maxScore << endl;

    cout << "不及格人数:" << fail << endl;


    return 0;
}