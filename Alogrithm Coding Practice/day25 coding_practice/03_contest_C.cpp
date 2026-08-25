#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    int n,k;

    cin>>n>>k;

    priority_queue<int,vector<int>,greater<int>> ls;

    for(int i=0;i<n;i++)
    {
        int q;

        cin>>q;

        ls.push(q);
    }

    while(k--)
    {
        int lastMin=ls.top()+1;

        ls.pop();

        ls.push(lastMin);
    }

    
        int out=ls.top();

        cout<<out<<" ";
    
    return 0;
}