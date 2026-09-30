#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n,m;

    cin>>n>>m;

    vector<int> ls(n+1);

    for(int i=1;i<=n;i++)
    {
        cin>>ls[i];
    }

    vector<int> d(n+2);

    for(int i=1;i<=n;i++)
    {
        d[i]=ls[i]-ls[i-1];
    }



    while(m--)
    {
        int choice,l,r,c;

        cin>>choice>>l>>r;

        if(choice==1)
        {
            cin>>c;

            d[l]+=c;

            d[r+1]-=c;

        }
        else if(choice==2)
        {   
            vector<int> a(n+1);

            vector<int> sum(n+1);

            for(int i=1;i<=n;i++)
            {
                a[i]=d[i]+a[i-1];
            }

            for(int i=1;i<=n;i++)
            {
                sum[i]=sum[i-1]+a[i];
            }

            cout<<sum[r]-sum[l-1]<<endl;

        }
    }
    return 0;
}