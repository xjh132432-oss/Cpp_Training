#include<iostream>
#include<vector>
#include<queue>

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
    }


    int start;

    cin>>start;


    const int INF=1e9;


    vector<int> dist(n,INF);


    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
    > q;



    dist[start]=0;


    q.push({0,start});



    while(!q.empty())
    {
        auto cur=q.top();

        q.pop();


        int d=cur.first;

        int u=cur.second;


        if(d>dist[u])
        {
            continue;
        }

        for(auto edge:graph[u])
        {
            int v=edge.first;

            int w=edge.second;


            if(dist[u]+w<dist[v])
            {
                dist[v]=dist[u]+w;

                q.push({dist[v],v});
            }
        }
    }



    for(int i=0;i<n;i++)
    {
        cout<<i<<" "<<dist[i]<<endl;
    }


    return 0;
}