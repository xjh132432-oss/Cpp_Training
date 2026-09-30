// 题目描述

// 小红去淘宝买了 n 件物品，第 i 件物品价格是 ai，其中部分物品小红不满意选择退货，退货可以原价退但需要收取 max(5, ⌊ai / 100⌋) 的运费。小红想知道自己最终花费了多少钱。
// ⌊x⌋ 代表对 x 向下取整。例如：⌊3.7⌋ = 3。

// 输入描述:
// 第一行输入一个整数 n 代表小红购买了 n 件物品。
// 第二行输入 n 个正整数 ai，代表 n 件物品的价格。
// 第三行输入一个长度为 n 且仅包含 'T' 和 'F' 的字符串，'T' 代表购买，'F' 代表退货。
// 1 ≤ n ≤ 10^3
// 1 ≤ ai ≤ 10^9

// 输出描述:
// 输出一个整数，代表小红最终花费的金额。
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    
    cin>>n;
    
    vector<int> a(n);
    
    long long sum=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    string s;
    
    cin>>s;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='T')
        {
            sum+=a[i];
        }
        
        if(s[i]=='F')
        {
            int x=a[i]/100.0;
            
            sum+=max(5,x);
        }
    }
        cout<<sum;
    
    return 0;
}