#include<iostream>
#include<vector>
using namespace std;

int main()
{   
    vector<int> score;

    int n;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        int score1;

        cin>>score1;

        score.push_back(score1);

    }

    for(auto it=score.begin();it!=score.end();)
    {
        if(*it<60)
        {
            it=score.erase(it);
        }
        else
        {
            it++;
        }
    }

    for(int i=0;i<score.size();i++)
{
    cout<<score[i]<<" ";
}

    int newscore;

    cin>>newscore;

    score.insert(score.begin()+1,newscore);

    for(int i=0;i<n;i++)
    {   

        cout<<score[i]<<" ";

    }

    score.resize(10);

    for(int i=0;i<10;i++)
    {   

        cout<<score[i]<<" ";

    }

    return 0;
}