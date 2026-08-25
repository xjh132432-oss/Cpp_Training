#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,q;
    
    cin>>n>>q;

    vector<int> ls(n+1);

    vector<int> sum(n+1);

    for(int i=1;i<=n;i++)
    {
        cin>>ls[i];

        sum[i]=sum[i-1]+ls[i];
    }

    while(q--)
    {
        int l,r;

        cin>>l>>r;

        int ans=sum[r]-sum[l-1];

        cout<<ans<<endl;

    }

    return 0;
}