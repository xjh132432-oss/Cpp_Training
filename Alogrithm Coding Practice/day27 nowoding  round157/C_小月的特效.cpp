// 小月正在检查一段游戏运行日志。日志中共有按时间记录的 n 条记录 a1, a2, …, an，第 i 条记录的特效种类为 ai。
// 对于任意一种日志中出现过的特效，设它第一次和最后一次出现的记录分别为 al, ar。若 l < r，且 r - l 为偶数，则称这个特效为特殊特效。
// 请你计算特殊特效的数量。
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    int n;
    
    cin>>n;
    
    vector<int> a(n+2);
    
    int count=0;
    
    unordered_map<int,int> num;
    
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        
        num[a[i]]=i;
    }
    
    unordered_map<int, bool> visited;
    
    for(int l=1;l<=n;l++)
    {    
        if(visited[a[l]])
        {
            continue;
        }
        
        int r=num[a[l]];
        
        if(l==r)
        {
            continue;
        }
                
        if((r-l)%2==0)
        {
            count++;

        }

        visited[a[l]]=true;
                
                
            
        
    }
    
    cout<<count;
    
    return 0;
}