#include<iostream>
#include<unordered_map>
// Day 08: advanced STL practice.
using namespace std;

int main()
{
    unordered_map<char,int> cnt;

    string s;

    cin>>s;

    for(char x:s)
    {
        cnt[x]++;
    }

    int maxCount=0;

    char maxChar=s[0];

    for(auto x:cnt)
    {
        if(x.second>maxCount)
        {
            maxCount=x.second;

            maxChar=x.first;
        }
    }

    cout<<maxChar<<" "<<maxCount;


    return 0;
}
