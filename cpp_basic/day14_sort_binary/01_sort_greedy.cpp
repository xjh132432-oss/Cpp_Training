#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Activity
{
    public:

    int start;

    int end;
};


bool cmp(const Activity& a,const Activity& b)
{
    return a.end<b.end;
};


int main()
{   

    int n;

    cin>>n;

    vector<Activity> activities(5);

    for(int i=0;i<n;i++)
    {

        cin>>activities[i].start>>activities[i].end;

    }

    sort(activities.begin(),activities.end(),cmp);

    vector<Activity> answer;

    int lastEnd=-1,count=0;

    for(auto x:activities)
    {
        if(x.start>=lastEnd)
        {
            count++;

            answer.push_back(x);

            lastEnd=x.end;

        }
        
    }

    cout<<"最多会议数量:"<<endl<<count<<endl;

    for(auto x:answer)
    {
        cout<<x.start<<" "<<x.end<<endl;
    }



    return 0;
}