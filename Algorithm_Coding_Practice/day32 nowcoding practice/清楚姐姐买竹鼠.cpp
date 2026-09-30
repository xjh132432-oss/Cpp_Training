// 题目描述

// 清楚姐姐途经山村，遇到一家售卖竹鼠的商铺：
// ∙ 花费 a 元可购买 1 只竹鼠；
// ∙ 花费 b 元可购买 3 只竹鼠。
// 给定 a, b, x，求买到至少 x 只竹鼠所需的最小花费。

// 输入描述:
// 在一行上输入三个整数 a, b, x (1 ≤ a, b, x ≤ 10^9)。

// 输出描述:
// 输出一个整数，表示最少需花费的金额。
#include<iostream>
using namespace std;

int main()
{
    long long a,b,x;
    
    cin>>a>>b>>x;
    
    double bs=b/3.0;
    
    if(a<=bs)
    {
        cout<<x*a;
        
        return 0;
    }
    
    else
    {    
        long long c=int(x/3);
        
        long long ans1=c*b+(x-3*c)*a;
        
        long long ans2=(c+1)*b;
        
        if(ans1>ans2)
        {
            cout<<ans2;
        }
        else
            
        {
            cout<<ans1;
        }
        
        return 0;
    }
    
    
    return 0;
}