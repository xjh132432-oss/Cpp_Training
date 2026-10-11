// 题目描述

// 小月正在进行一个删数游戏。她获得了一个长度为 n 的整数数组 a₁, a₂, …, aₙ。
// 她必须进行恰好一次操作：选择一个在数组中出现过的数值 c，删除数组中所有等于 c 的元素，其他元素的相对顺序保持不变。
// 删除后，将剩余的 m 个元素从 1 开始重新编号，得到数组 b₁, b₂, …, bₘ。这个数组的读数定义如下：
// ∙ 若 m > 0，读数为 b₁ − b₂ + b₃ − …，即奇数下标处的元素之和减去偶数下标处的元素之和；
// ∙ 若 m = 0，即所有元素均被删除，读数为 0。
// 小月想知道，选择不同的数值 c，能够得到的读数的绝对值最小是多少？

// 输入描述:
// 第一行输入一个整数 n (1 ≤ n ≤ 2×10⁵)，表示数组的长度。
// 第二行输入 n 个整数 a₁, a₂, …, aₙ (−10⁹ ≤ aᵢ ≤ 10⁹)，表示数组中的元素。

// 输出描述:
// 输出一个整数，表示能够得到的读数的绝对值的最小值。
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int> p(n);
    vector<int> l(n);
    
    for(int i=0;i<n;i++)
    {    int q;
        cin>>q;
     
        p[i]=q;
        l[i]=q;
    }
    
    sort(l.begin(),l.end());
    
    l.erase(unique(l.begin(),l.end()),l.end());
    
    if(l.size()==1) cout<<0;
    
    else{
        
        int ans=1e9;

        for(int x:l)
        {
            int test=0;

            int count=1;

            for(int i=0;i<n;i++)
            {    
                if(x==p[i]) continue;
                if(count%2!=0) 
                {
                    count++;
                    test+=p[i];
                    continue;
                }
                if(count%2==0) 
                {
                    count++;
                    test-=p[i];
                    continue;
                }
            }

            if(abs(test)<ans) ans=abs(test);
        }
    
        cout<<ans;
    }
    
    
    return 0;
}