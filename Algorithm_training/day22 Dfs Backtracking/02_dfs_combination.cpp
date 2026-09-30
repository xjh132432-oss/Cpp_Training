#include<iostream>
#include<vector>
using namespace std;



int n;
int k;
int target;

vector<int> path;

void dfs(int start,int sum)
{

    if(path.size()==k&&sum==target)
    {
        for(auto x:path)
        {
            cout<<x<<" ";
        }
        
        cout<<endl;

        return;
    }



    if(sum>=target)
    {
        return;
    }



    int need=k-path.size();


        for(int i=start;i<=n;i++)
        {   

            if(n-i+1<need)
            {
                break;
            }




            path.push_back(i);

            dfs(i+1,sum+i);

            path.pop_back();


        }

}



int main()
{
    

    cin>>n>>k>>target;

    dfs(1,0);


    return 0;
}