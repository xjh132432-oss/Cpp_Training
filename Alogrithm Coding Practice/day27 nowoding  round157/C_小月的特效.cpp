#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    int n;
    
    cin>>n;
    
    vector<int> a(n+2);
    
    int count=0;
    
    unordered_map<int,int> num;
    
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        
        num[a[i]]=i;
    }
    
    unordered_map<int, bool> visited;
    
    for(int l=1;l<=n;l++)
    {    
        if(visited[a[l]])
        {
            continue;
        }
        
        int r=num[a[l]];
        
        if(l==r)
        {
            continue;
        }
                
        if((r-l)%2==0)
        {
            count++;

        }

        visited[a[l]]=true;
                
                
            
        
    }
    
    cout<<count;
    
    return 0;
}