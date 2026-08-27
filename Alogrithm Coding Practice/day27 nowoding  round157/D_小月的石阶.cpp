#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
    int n,k;
     
    cin>>n>>k;
     
    vector<int> num(n+1);
     
     
    for(int i=1;i<=n;i++)
    {
        cin>>num[i];
    }
     
    int max=-1;
     
    int j=1;
     
    for(int i=1;i<=n;i++)
    {    
 
         
        while(j<=n&&j>=i)
        {
            if((num[j]-num[i])>k)
            {
                i++;
            }
            else if((num[j]-num[i])<k)
            {    
                if((j-i)>max)
                {
                    max=j-i+1;
                }
                 
                j++;
            }
            else
            {   
                if((j-i)>max)
                {
                    max=j-i+1;
                }
                 
                j++;
            }
             
        }
    }
     
     
    cout<<max;
     
    return 0;
}