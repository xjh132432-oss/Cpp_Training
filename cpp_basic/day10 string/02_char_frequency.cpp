#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main()
{
    string s;

    cin>>s;

    unordered_map<char,int> count;

    for(auto a:s)
    {
        count[a]++;
    }


    char maxChar;

    int maxCount=0;

    for(auto x:count)
    {
        cout<<x.first<<":"<<x.second<<endl;
    }

    for(auto x:count)
    {
        if(x.second>maxCount)
        {
            maxCount=x.second;

            maxChar=x.first;
        }
    }


    cout<<"最多字符:"<<endl;

    cout<<maxChar<<endl;

    cout<<"次数:"<<endl;

    cout<<maxCount<<endl;


    return 0;
}