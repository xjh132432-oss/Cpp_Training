#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int main()
{
    int n,m;

    cin>>n>>m;

    vector<pair<int,int>> graph[n];

    for(int i=0;i<m;i++)
    {
        int a,b,w;

        cin>>a>>b>>w;

        graph[a].push_back({b,w});

        graph[b].push_back({a,w});

    }


    
    int start=0,target;

    cin>>start>>target;

    vector<bool> visit(n,false);

    vector<int> dist(n,INT_MAX);

    visit[start]=true;

    dist[start]=0;

    for(int i=0;i<n;i++)
    {   
        int u=-1;

        for(int j=0;j<n;j++)
        {
            if(!visit[j]&&(u==-1||dist[j]<dist[u]))
            {
                u=j;
            }
        }

        if(u==-1)
        {
            break;
        }
        
        visit[u]=true;

        for(auto x:graph[u])
        {    
            if(dist[u]+x.second<dist[x.first])
            {
                
                dist[x.first]=dist[u]+x.second;

            }
        }
    }

    cout<<dist[target];

    return 0;
}