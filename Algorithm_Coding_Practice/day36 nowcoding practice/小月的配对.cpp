// 题目描述

// 给定长度为 n 的排列 p₁, p₂, …, pₙ 与正整数 k。
// 对于 i ∈ [1, n]，请你统计满足 i + pᵢ 能够被 k 整除的 i 的数量。

// 【名词解释】
// 长度为 n 的排列：由 1, 2, …, n 这 n 个整数、按任意顺序组成的数组（每个整数均恰好出现一次）。例如，{2, 3, 1, 5, 4} 是一个长度为 5 的排列，而 {1, 2, 2} 和 {1, 3, 4} 都不是排列，因为前者存在重复元素，后者包含了超出范围的数。

// 输入描述:
// 第一行输入两个整数 n, k (1 ≤ n ≤ 2×10⁵; 1 ≤ k ≤ 10⁹)。
// 第二行输入 n 个整数 p₁, p₂, …, pₙ (1 ≤ pᵢ ≤ n)。

// 输出描述:
//输出合格位置数量。
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,k;
    
    cin>>n>>k;
    
    int count=0;
    
    for(int i=1;i<=n;i++)
    {
        int q;
        
        cin>>q;
        
        if((i+q)%k==0)
        {
            count++;
        }
    }
    
    cout<<count;
    
    return 0;
}