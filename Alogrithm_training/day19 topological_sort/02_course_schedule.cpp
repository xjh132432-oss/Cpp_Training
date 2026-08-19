#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    int n,m;

    cin>>n>>m;

    vector<vector<int>> point(n+1);

    vector<int> count(n+1);

    for(int i=0;i<m;i++)
    {
        int num1,num2;

        cin>>num1>>num2;

        point[num1].push_back(num2);

        count[num2]++;
    }



    queue<int> q;

    for(int i=1;i<n;i++)
    {
        if(count[i]==0)
        {
            q.push(i);
        }
    }

    while(!q.empty())
    {
        int x=q.front();

        q.pop();



        cout<<x<<" ";

        
        for(auto z:point[x])
        {   
            count[z]--;

            if(count[z]==0)
            {
                q.push(z);
            }
            
        }

        
        
    }
    return 0;
}