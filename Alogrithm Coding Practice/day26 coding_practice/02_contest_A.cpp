#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int n;
    
    cin>>n;
        
    unordered_map<char,int> count;
    
    for(int i=0;i<n;i++)
    {    
        char x;
        
        cin>>x;
        
        count[x]++;
        
        if(count[x]>=3)
        {
            cout<<i+1;
            
            return 0;
        }
    }
        
        
    cout<<-1;
    
    

    return 0;
}