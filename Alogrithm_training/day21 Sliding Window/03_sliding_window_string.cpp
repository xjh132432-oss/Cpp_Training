#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;


int main()
{
    string s,t;

    cin>>s>>t;


    unordered_map<char,int> need;


    for(char c:t)
    {
        need[c]++;
    }


    unordered_map<char,int> window;


    int l=0;

    int valid=0;


    int start=0;

    int len=INT_MAX;


    for(int r=0;r<s.size();r++)
    {
        char c=s[r];


        window[c]++;


        if(need.count(c) &&
           window[c]==need[c])
        {
            valid++;
        }



        while(valid==need.size())
        {
            if(r-l+1<len)
            {
                start=l;

                len=r-l+1;
            }


            char left=s[l];


            if(need.count(left) &&
               window[left]==need[left])
            {
                valid--;
            }


            window[left]--;

            l++;
        }
    }


    if(len==INT_MAX)
    {
        cout<<0;
    }
    else
    {
        cout<<s.substr(start,len);
    }


    return 0;
}