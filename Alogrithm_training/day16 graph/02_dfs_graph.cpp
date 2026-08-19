#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> graph(100);

bool visit[100];

void DFS(int x)
{
    visit[x]=true;

    cout<<x<<" ";

    for(int z:graph[x])
    {
        if(!visit[z])
        {
            DFS(z);
        }
    }
}


int main()
{
    int m,n;

    cin>>n>>m;


    for(int i=0;i<m;i++)
    {
        int x,z;

        cin>>x>>z;

        graph[x].push_back(z);

        graph[z].push_back(x);
    }

    DFS(0);

    return 0;
}