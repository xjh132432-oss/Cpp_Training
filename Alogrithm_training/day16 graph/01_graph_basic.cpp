#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m;

    cin>>n>>m;

    vector<vector<int>> graph(n);

    for(int i=0;i<m;i++)
    {
        int x,z;

        cin>>x>>z;

        graph[x].push_back(z);

        graph[z].push_back(x);


    }

    
    for(int i=0;i<n;i++)
    {
        cout<<i<<":";
        
        for(auto x:graph[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}