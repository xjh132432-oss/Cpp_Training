
// 链接：https://ac.nowcoder.com/acm/contest/140070/A
// 来源：牛客网

// 小月可以施展火系魔法和风系魔法。两种魔法的等级均为 0 到 9 的整数。
// 当且仅当两种魔法的等级之和恰好为 10 时，小月能够成功施展组合魔法。
// 给出一次施展的两种魔法的等级，请你判断她这次能否施展组合魔法。
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a,b;
    
    cin>>a>>b;
    
    if(a+b==10)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    
    return 0;
}