// 题目描述

// 众所不周知，Tk 是坤的真爱粉，所以 Tk 对所有与 25 有关的东西都极其敏感。一天邪恶的黑粉给 Tk 一个长度为 n 仅有 '2' 或 '5' 组成的字符串 s（下标从 1 开始）。Tk 可以进行以下操作：
// ∙ 选择两个不同的下标 i, j 交换 s_i 与 s_j。
// Tk 希望你能求出最小的操作次数使得字符串中不存在子序列 "25"。

// 【子序列】子序列为从原序列中删除任意个（可以为零、可以为全部）元素得到的新序列。

// 输入描述:
// 第一行输入一个正整数 n (1 ≤ n ≤ 2×10^5) 表示字符串长度。
// 第二行输入一个长度为 n 仅由 '2', '5' 构成的字符串 s。

// 输出描述:
// 输出一个整数表示最小操作次数。


#include<iostream>
using namespace std;

int main()
{
    int n;
    
    cin>>n;
    
    string s;
    
    cin>>s;
    
    int count=0;
    
    int index;
    
    int cnt5 = 0;
    
    for (char c : s) 
        if (c == '5') cnt5++;
    
    for(int i=0;i<cnt5;i++)
        {
            if(s[i]=='2')
            {
                count++;
            }
        }
    
    
    cout<<count;
    
    return 0;
}