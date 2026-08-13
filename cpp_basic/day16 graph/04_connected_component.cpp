#include<iostream>
#include<vector>
using namespace std;



bool visit[100];

vector<vector<int>> graph(100);

void dfs(int x)
{   
    visit[x]=true;

    for(auto z:graph[x])
    {   
        if(!visit[z])
        {
            dfs(z);
        }

    }

}



int main()
{
    int n,m;

    cin>>n>>m;



    for(int i=0;i<m;i++)
    {
        int x,z;

        cin>>x>>z;

        graph[x].push_back(z);

        graph[z].push_back(x);

    }



    int count=0;

    for(int i=0;i<n;i++)
    {
        
        if(!visit[i])
        {
            count++;

            dfs(i);
        }
        
    }



    cout<<count;


    return 0;
}