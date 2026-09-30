// 题目描述

// 小红喜欢 1，小紫喜欢 2，小彩喜欢 3。
// 她们定义一个字符串是好字符串，当且仅当字符串中同时存在 1, 2, 3 且数量相同。
// 现在有一个仅由 1, 2, 3 组成的长为 n 的字符串，小彩想知道，这个字符串有多少子串是好字符串？

// 【名词解释】
// 子串：从原字符串中，连续的选择一段字符（可以全选、可以不选）得到的新字符串。

// 输入描述:
// 第一行输入一个整数 n (1 ≤ n ≤ 2000)。
// 第二行输入一个字符串。

// 输出描述:
// 输出一个整数，代表好字符串的数量。


#include<iostream>
using namespace std;

int main()
{
    int n;
    
    string s;
    
    cin>>n>>s;
    
    int ans=0;
    
    for(int i=0;i<n;i++)
    {
        int count1=0;
        
        int count2=0;
        
        int count3=0;
        
        for(int j=i;j<n;j++)
        {
            if(s[j]=='1')
            {
                count1++;
            }
            if(s[j]=='2')
            {
                count2++;
            }
            if(s[j]=='3')
            {
                count3++;
            }
            
            if(count1==count2&&count2==count3&&count1>0)
            {
                ans++;
            }
        }
    }
    
    cout<<ans;
    
    return 0;
}