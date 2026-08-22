#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main()
{
    int n;

    cin>>n;

    vector<priority_queue<int>> a(n+1);

    for(int i=0;i<n;i++)
    {
        int deadline,profit;

        cin>>deadline>>profit;

        a[deadline].push(profit);

    }

    int Max_profit=0;

    for(auto x:a)
    {   
        if(!x.empty())
        {
            Max_profit+=x.top();
        }
        
    }

    cout<<Max_profit;






    return 0;
}