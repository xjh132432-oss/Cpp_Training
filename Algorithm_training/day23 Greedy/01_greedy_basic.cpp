#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    int n;

    cin>>n;
    
    vector<pair<int,int>> activity(n);

    for(int i=0;i<n;i++)
    {
        cin>>activity[i].first
            >>activity[i].second;

    }


    sort(activity.begin(),activity.end(),
        [](pair<int,int>& a,pair<int,int>& b)
        {
            return a.second<b.second;
        });

        int last_End=-1;

        int count=0;

        for(auto x:activity)
        {
            if(x.first>=last_End)
            {
                last_End=x.second;

                count++;
            }
        }

        cout<<count;



    return 0;
}