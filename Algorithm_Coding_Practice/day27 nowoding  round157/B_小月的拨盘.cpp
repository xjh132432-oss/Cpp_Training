// 小月有一个圆形拨盘，拨盘上的数字依次为 0,1,…,9。数字 9 的顺时针下一位是 0，数字 0 的逆时针下一位是 9。
// 拨盘初始停在数字 d。小月会执行 n 次操作，用一个长为 n 的字符串 s=s1s2…sn 表示：
// 如果 si = +，那么第 i 次操作会将拨盘转至顺时针的下一位。
// 如果 si = -，那么第 i 次操作会将拨盘转至逆时针的下一位。
// 请你计算执行完全部指令后拨盘停在哪一个数字，以及操作过程中（初始停在 d 不计入）拨盘总共经过了多少次数字 d
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,d;
    
    cin>>n>>d;
    
    int ans=d;
    
    int count=0;
    
    
    for(int i=0;i<n;i++)
    {
        char x;
        
        cin>>x;
        
        if(x=='+')
        {
            if(ans==9)
            {
                ans=0;
            }
            else
            {
                ans+=1;
            }
        }
        
        if(x=='-')
        {
            if(ans==0)
            {
                ans=9;
            }
            else
            {
                ans-=1;
            }
        }
        
        if(ans==d)
        {
            count++;
        }

    }
    
    
    cout<<ans<<" "<<count;
    
    
    
    
    return 0;
}