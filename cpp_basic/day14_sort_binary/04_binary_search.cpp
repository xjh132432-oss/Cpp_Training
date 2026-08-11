#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;

    cin>>n;

    vector<int> score;

    for(int i=0;i<n;i++)
    {
        int x;

        cin>>x;

        score.push_back(x);

    }

    int target;

    cin>>target;

    int l=0,r=n-1;
    
    bool flag=false;

    while(l<=r)
    {   
        int mid=(r+l)/2;

        if(score[mid]==target)
        {
            flag=true;
            
            break;
        }
        else if(score[mid]>target)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }

     if(flag)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }

    return 0;
}