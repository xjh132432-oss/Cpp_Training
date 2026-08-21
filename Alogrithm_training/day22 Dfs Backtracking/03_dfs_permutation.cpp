#include<iostream>
#include<vector>
using namespace std;


int n;

vector<int> path;

vector<bool> visited;

void dfs()
{   
    if(path.size()==n)
    {
        for(auto x:path)
        {
            cout<<x<<" ";
        }

        cout<<endl;

        return;
    }
    for(int i=1;i<=n;i++)
    {   
        if(!visited[i])
        {
            visited[i]=true;

            path.push_back(i);

            dfs();

            path.pop_back();

            visited[i]=false;
        }

    }
}






int main()
{   
    cin>>n;

    visited.resize(n+1,false);

    dfs();

    return 0;
}