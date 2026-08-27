#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,d;
    
    cin>>n>>d;
    
    int ans=d;
    
    int count=0;
    
    
    for(int i=0;i<n;i++)
    {
        char x;
        
        cin>>x;
        
        if(x=='+')
        {
            if(ans==9)
            {
                ans=0;
            }
            else
            {
                ans+=1;
            }
        }
        
        if(x=='-')
        {
            if(ans==0)
            {
                ans=9;
            }
            else
            {
                ans-=1;
            }
        }
        
        if(ans==d)
        {
            count++;
        }

    }
    
    
    cout<<ans<<" "<<count;
    
    
    
    
    return 0;
}