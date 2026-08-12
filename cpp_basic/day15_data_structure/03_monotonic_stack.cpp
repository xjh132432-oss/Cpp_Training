#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main()
{
    int n;

    cin>>n;

    vector<int> p(n);

    vector<int> ans(n,-1);

    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }

    stack<int> q;

    for(int i=0;i<n;i++)
    {   

        while(!q.empty()&&p[q.top()]<p[i])
        {

                ans[q.top()]=p[i];

                q.pop();

        }

        q.push(i);
    }


    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    return 0;

}