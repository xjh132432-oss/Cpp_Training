#include<iostream>
#include<vector>
#include<queue>
using namespace std;


int main()
{
    int n,m;

    cin>>n>>m;

    vector<vector<int>> graph(n);

    bool visit[n];

    for(int i=0;i<m;i++)
    {
        int x,z;

        cin>>x>>z;

        graph[x].push_back(z);

        graph[z].push_back(x);


    }

    queue<int> bfs;

    bfs.push(0);

    visit[0]=true;


    while(!bfs.empty())
    { 

        for(auto x:graph[bfs.front()])
        {
            if(!visit[x])
            {
                visit[x]=true;

                bfs.push(x);
            }

        }
        
        cout<<bfs.front()<<" ";
        
        bfs.pop();

        
    }



    return 0;
}