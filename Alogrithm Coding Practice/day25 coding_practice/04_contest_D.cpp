#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;

    cin>>n;

    vector<pair<int,int>> ls(n,{0,0});

    vector<int> point;

    for(int i=0;i<n;i++)
    {
        int l,r;

        cin>>l>>r;

        point.push_back(l);

        point.push_back(r);

        ls[i]={l,r};

    }

    sort(point.begin(),point.end());

    point.erase(
        unique(point.begin(), point.end()),
        point.end()
    );

    vector<int> count(point.size()-1,0);

    for(auto x:ls)
    {
        int l=lower_bound(point.begin(),point.end(),x.first)-point.begin();

        int r=upper_bound(point.begin(),point.end(),x.second)-point.begin();

        count[l]++;

        count[r]--;

    }


    int sum=0;

    int cover=0;

    int ss=count.size();

    for(int i=0;i<ss;i++)
    {   
        cover+=count[i];
        
        if(cover>=2)
        {

                sum+=point[i+1]-point[i];
        }
        
    }

    cout<<sum;

    return 0;
}