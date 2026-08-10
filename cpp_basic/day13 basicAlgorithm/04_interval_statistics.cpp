#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main()
{
    int n;

    cin>>n;

    vector<int> num;

    for(int i=0;i<n;i++)    
    {
        int x;

        cin>>x;

        num.push_back(x);

    }

    vector<int> prefix(n+1);

    for(int i=0;i<n;i++)
    {
        prefix[i+1]=prefix[i]+num[i];
    }

    int q;

    cin>>q;

    while(q--)
    {
         int l,r;

         cin>>l>>r;

         int sum=prefix[r+1]-prefix[l];

         cout<<sum<<endl;
    }

    unordered_map<int,int> count;

    for(auto x:num)
    {
        count[x]++;
    }

    for(auto x:count)
    {
        cout<<x.first<<":"<<x.second<<endl;
    }




    return 0;
}