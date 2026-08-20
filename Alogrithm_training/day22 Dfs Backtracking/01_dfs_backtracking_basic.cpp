#include<iostream>
#include<vector>

using namespace std;


int n;


vector<int> nums;


vector<int> path;


vector<bool> used;



void dfs()
{

    if(path.size()==n)
    {
        for(int x:path)
        {
            cout<<x<<" ";
        }

        cout<<endl;

        return;
    }



    for(int i=0;i<n;i++)
    {

        if(used[i])
        {
            continue;
        }


        used[i]=true;

        path.push_back(nums[i]);



        dfs();


        path.pop_back();

        used[i]=false;

    }

}



int main()
{

    cin>>n;


    nums.resize(n);


    used.resize(n,false);



    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }



    dfs();



    return 0;
}