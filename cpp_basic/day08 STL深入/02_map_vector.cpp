#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    map<int,vector<string>> Class;

    int n;

    cin>>n;

    for(int i=0;i<n;i++)
    {   
        int num;

        string name1;

        vector<string> name;

        cin>>num;

        cin>>name1;

        Class[num].push_back(name1);

        
    }


        for(auto x:Class)
        {
            cout<<x.first<<":"<<endl;

            for(auto j:x.second)
            {
                cout<<j<<" ";
            }

            cout<<endl;

        }

        return 0;
}