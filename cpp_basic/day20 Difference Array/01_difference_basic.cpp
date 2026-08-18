#include<iostream>
#include<vector>

using namespace std;


int main()
{
    int n,m;

    cin>>n>>m;


    vector<int>a(n+1);

    vector<int>d(n+2);


    for(int i=1;i<=n;i++)
    {
        cin>>a[i];

        d[i]=a[i]-a[i-1];
    }


    while(m--)
    {
        int l,r,c;

        cin>>l>>r>>c;


        d[l]+=c;

        d[r+1]-=c;
    }


    for(int i=1;i<=n;i++)
    {
        d[i]+=d[i-1];

        cout<<d[i]<<" ";
    }


    return 0;
}