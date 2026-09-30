#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;


int main()
{
    int n;

    cin>>n;

    vector<int> ls(n);

    for(int i=0;i<n;i++)
    {
        cin>>ls[i];
    }

    unordered_map<int,int> cnt;


    int i=0,j=0;

    int ans=0;
    for(int j=0;j<n;j++)
    {   
        cnt[ls[j]]++;


        while(cnt[ls[j]]>1)
        {   

                cnt[ls[i]]--;

                i++;
            
        }
            
            ans=max(ans,j-i+1);
                
        
    }
    

    cout<<ans<<endl;

    return 0;
}