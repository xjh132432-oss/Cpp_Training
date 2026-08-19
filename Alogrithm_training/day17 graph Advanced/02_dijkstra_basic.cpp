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
    }


    int start;

    cin>>start;


    const int INF=INT_MAX;


    vector<int> dist(n,INF);

    vector<bool> visited(n,false);


    dist[start]=0;



    for(int i=0;i<n;i++)
    {
        int u=-1;

        for(int j=0;j<n;j++)
        {
            if(!visited[j] && (u==-1||dist[j]<dist[u]))
            {
                u=j;
            }
        }

        for(auto edge:graph[u])
        {
            int v=edge.first;

            int w=edge.second;


            if(dist[u]+w<dist[v])
            {
                dist[v]=dist[u]+w;
            }
        }
    }



    for(int i=0;i<n;i++)
    {
        cout<<i<<" : "<<dist[i]<<endl;
    }


    return 0;
}