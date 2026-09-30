#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    int n,m;

    cin>>n>>m;

    vector<vector<int>> graph(n+1);

    vector<int> indegree(n+1);

    for(int i=0;i<m;i++)
    {
        int num1,num2;

        cin>>num1>>num2;

        graph[num1].push_back(num2);

        indegree[num2]++;
    }



    queue<int> q;

    for(int i=1;i<n;i++)
    {
        if(indegree[i]==0)
        {
            q.push(i);
        }
    }

    int count=0;

    while(!q.empty())
    {
        int x=q.front();

        q.pop();

        count++;
        
        for(auto z:graph[x])
        {   
            indegree[z]--;

            if(indegree[z]==0)
            {
                q.push(z);
            }
            
        }
    }


    if(count==n)
    {
        cout<<"无环!";
    }
    else
    {
        cout<<"有环!";
    }

    return 0;
}