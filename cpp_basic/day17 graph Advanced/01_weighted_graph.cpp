#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m;

    cin>>n>>m;

    vector<pair<int,int>> weight[n];

    while(m--)
    {
        int start,end,value;

        cin>>start>>end>>value;

        weight[start].push_back({end,value});


    }


    for(int i=0;i<n;i++)
    {
        cout<<i<<":"<<endl;

        for(auto x:weight[i])
        {
            cout<<x.first
                <<"("
                <<x.second
                <<")"
                <<" ";
        }
        cout<<endl;
    }
    return 0;
}