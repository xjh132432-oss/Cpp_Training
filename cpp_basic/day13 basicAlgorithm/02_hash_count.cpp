#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
    int n;

    cin>>n;

    unordered_map<int,int> count;

    while(n--)
    {
        int x;

        cin>>x;

        count[x]++;
    }

    
    int maxNum=0,maxCount=0;

    cout<<"数字统计:"<<endl;

    for(auto x:count)
    {
        if(x.second>maxCount)
        {
            maxNum=x.first;

            maxCount=x.second;
        }

        cout<<x.first<<":"<<x.second<<endl;
    }

    int findNum;

    cin>>findNum;

    if(count.count(findNum))
    {
        cout<<"出现了"<<count[findNum]<<"次"<<endl;
    }

    cout<<maxNum<<"出现最多,出现了:"<<maxCount<<"次"<<endl;

    return 0;

}