#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n,k;

    cin>>n>>k;
    vector<int> p(n);

    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }

    bool ans=false;

    
    for(int i=0;i<n;i++)
    {
        int j=i;

        while(j<n)
        {   
            j++;

            if(p[j]-p[i]<=k||p[i]-p[j]<=k)
            {
                ans=true;
            }

            
        }
    }

    if(ans)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }


    return 0;
}