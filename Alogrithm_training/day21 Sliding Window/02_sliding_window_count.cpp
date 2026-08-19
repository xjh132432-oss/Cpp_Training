#include<iostream>
#include<vector>
using namespace std;    

int main()
{
    int n,target;

    cin>>n>>target;

    vector<int> ls(n+1,0);

    int sum=0;

    for(int i=1;i<=n;i++)
    {
        cin>>ls[i]; 
    }
    
    

    int i=0;

    int minCount=INT_MAX;

    for(int j=0;j<n;j++)
    {
        sum+=ls[i];

        while(sum>=target)
        {
            if(j-i+1<minCount)
            {
                minCount=j-i+1;
            }
            
            sum-=ls[i];

            i++;
        }


    }

    if(minCount==INT_MAX)
    {
        cout<<0;
    }
    else
    {
        cout<<minCount;
    }




    return 0;
}