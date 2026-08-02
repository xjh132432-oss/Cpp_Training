#include<iostream>
#include<unordered_map>

using namespace std;


int main()
{
    int n;

    cin>>n;


    unordered_map<int,int> cnt;


    for(int i=0;i<n;i++)
    {
        int x;

        cin>>x;

        cnt[x]++;
    }


    for(auto x:cnt)
    {
        cout<<"数字"
            <<x.first
            <<"出现"
            <<x.second
            <<"次"
            <<endl;
    }


    return 0;
}