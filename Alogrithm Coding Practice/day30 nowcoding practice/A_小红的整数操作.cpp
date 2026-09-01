// 给定三个正整数 x, y, d，小红会执行恰好一次操作，
// 使 x 变为 x+d 或 x−d，请你判断她能否将 x 变为 y。
#include<iostream>
using namespace std;

int main()
{
    int x,y,d;
    
    cin>>x>>y>>d;
    
    int z=abs(x-y);
    
    if(z==d)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    
    
    return 0;
}