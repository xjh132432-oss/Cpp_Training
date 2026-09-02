// 题目描述

// 请你构造一个长度为 n 的仅包含 '0', '1' 的字符串 s，其中的 '0' 和 '1' 数量相等，且有尽可能多的 i (1 ≤ i < n) 满足 s_i = s_{i+1}。如果不存在合法的字符串，请输出 -1。

// 输入描述:
// 第一行输入一个整数 n (1 ≤ n ≤ 2×10^5)。

// 输出描述:
// 如果答案不存在，直接输出 -1；否则输出一个长为 n 的字符串，其中仅包含 '0', '1'。
#include<iostream>
#include<string>
using namespace std;

int main()
{    
    int n;
    
    cin>>n;
    
    if(n%2!=0)
    {
        cout<<-1;
        
        return 0;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(i<=(n/2))
            {
                cout<<1;
            }
            else
                
            {
                cout<<0;
            }
        }
    }
    
    
    
    return 0;
}